/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:09:49 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 19:09:18 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_FUNCTIONS_H
# define PHILO_FUNCTIONS_H

# include "philo.h"

t_data	*get_data(t_data *data);
int		ft_atoi(const char *str);
void	init_philos(t_arg *s_philo, char **av, int ac);
void	init_struct(int ac, char **av);
long	get_time(t_time *start);

#endif
