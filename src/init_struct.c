/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:54:08 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/09 20:31:15 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_philos(t_philo *s_philo, char **av, int ac)
{
	s_philo->nb_philo = ft_atoi(av[2]);
	s_philo->t_die = ft_atoi(av[3]);
	s_philo->t_eat = ft_atoi(av[4]);
	s_philo->t_sleep = ft_atoi(av[5]);
	if (ac == 6)
		s_philo->times_eat = ft_atoi(av[6]);
	else
		s_philo->times_eat = -1;
	s_philo->kill = 0;
}

void	init_struct(int ac, char **av)
{
	t_data *data;

	init_philos(&data->s_philo, av, ac);
	get_data(data);
	return (data);
}
