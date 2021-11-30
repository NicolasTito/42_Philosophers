/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:09:49 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 22:28:54 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_FUNCTIONS_H
# define PHILO_FUNCTIONS_H

# include "philo.h"

t_data	*get_data(t_data *data);
int		ft_atoi(const char *str);
void	init_args(t_arg *s_philo, char **av, int ac);
t_data	*init_struct(int ac, char **av);
void	init_philo(t_data *data, int id);
long	get_time(t_time *start);
void	*ft_calloc(size_t count, size_t size);

#endif
