# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 16:03:32 by nide-mel          #+#    #+#              #
#    Updated: 2021/10/13 12:56:27 by nide-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
NAME_BONUS =

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

HEADER = ./includes/$(wildcard*.h)
HEADER_BONUS = ./includes/$(wildcard*.h)

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

INCLUDES = -I libft/includes -I ./includes

SRC_PATH = ./src

OBJ_PATH = ./obj

SRC_NAME = 

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

all : $(NAME) $(NAME_BONUS)

$(NAME): $(OBJ)
	@echo "\x1b[32m"
	@echo cat ./art/ok
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) $(LIBFT) -o $(NAME)
	@echo "[$(NAME) compiled]"
	@echo "\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p obj
	@$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(OBJ)
	@rm -rf $(OBJB)
	@echo ./art/clean
	@echo "\033[33m"
	@cat ./art/clean
	@echo "all $(NAME) and $(NAME_BONUS) .o files are removed"
	@echo "\033[0m"

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME) $(NAME_BONUS)
	@echo ./art/fclean
	@echo "\033[31m"
	@cat ./art/fclean
	@echo "$(NAME) and $(NAME_BONUS) is deleted"
	@echo"\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
