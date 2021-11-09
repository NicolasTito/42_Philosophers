/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:09:49 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/09 01:07:34 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_FUNCTIONS_H
# define PHILO_FUNCTIONS_H

# include "philo.h"

t_data	*get_data(t_data *data);
int		ft_atoi(const char *str);
void	init_philos(t_philo *s_philo, char **av, int ac);
t_data	*init_struct(int ac, char **av);

#endif