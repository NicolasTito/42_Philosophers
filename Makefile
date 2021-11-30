# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 16:03:32 by nide-mel          #+#    #+#              #
#    Updated: 2021/11/30 23:16:34 by nide-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
NAME_BONUS =

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

HEADER = ./includes/$(wildcard*.h)
HEADER_BONUS = ./inc_bonus/$(wildcard*.h)

INCLUDES = -I ./includes
INC_BONUS = -I ./inc_bonus

SRC_PATH = ./src
SRC_PATH_BONUS = ./bonus

OBJ_PATH = ./obj
OBJ_PATH_BONUS = ./obj_bonus

SRC_NAME = 	main.c\
			init_struct.c\
			utils.c\
			ft_time.c\
			lib_funct/libft.c\

SRC_NAME_BONUS =

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_PATH_BONUS)/, $(SRC_NAME_BONUS:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
SRC = $(addprefix $(SRC_PATH_BONUS)/, $(SRC_NAME_BONUS))

all : $(NAME)

$(NAME): $(OBJ)
	@echo "\x1b[32m"
	@cat ./art/ok
	@$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)
	@echo "[$(NAME) compiled]"
	@echo "\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p obj
	@mkdir -p obj/lib_funct
	@$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

bonus : $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS)
	@echo "\x1b[32m"
	@echo cat ./art/ok
	@$(CC) $(CFLAGS) $(OBJ_BONUS) $(INC_BONUS) -o $(NAME_BONUS)
	@echo "[bonuscompiled]"
	@echo "\x1b[0m"

$(OBJ_PATH_BONUS)/%.o : $(SRC_PATH_BONUS)/%.c
	@mkdir -p obj_bonus
	@$(CC) -c $(CFLAGS) $(INC_BONUS) $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJB)
	@echo ./art/clean
	@echo "\033[33m"
	@cat ./art/clean
	@echo "all $(NAME) and bonus.o files are removed"
	@echo "\033[0m"

fclean: clean
	@rm -f $(NAME) $(NAME_BONUS)
	@echo ./art/fclean
	@echo "\033[31m"
	@cat ./art/fclean
	@echo "$(NAME) and bonus is deleted"
	@echo "\033[0m"

re: fclean all

.PHONY: all, bonus, clean, fclean, re
