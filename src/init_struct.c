/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:54:08 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/04 18:27:03 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_philo(t_data *data, int id)
{
	data->philo[id].id = id + 1;
	data->philo[id].start_eat = 0;
	data->philo[id].start_sleep = 0;
	data->philo[id].start_think = 0;
	data->philo[id].status = thinking;
	data->philo[id].count_eat = 0;
	if (data->philo[id].id == data->s_arg.nb_philo)
	{
		data->philo[id].r_fork = &data->forks[0];
		data->philo[id].r_mutex = &data->mutex[0];
	}
	else
	{
		data->philo[id].r_fork = &data->forks[id + 1];
		data->philo[id].r_mutex = &data->mutex[id + 1];
	}
	data->philo[id].l_fork = &data->forks[id];
	data->philo[id].l_mutex = &data->mutex[id];
}

void	init_args(t_arg *s_philo, char **av, int ac)
{
	s_philo->nb_philo = ft_atoi(av[1]);
	s_philo->t_die = ft_atoi(av[2]);
	s_philo->t_eat = ft_atoi(av[3]);
	s_philo->t_sleep = ft_atoi(av[4]);
	if (ac == 6)
		s_philo->times_eat = ft_atoi(av[5]);
	else
		s_philo->times_eat = -1;
}

bool	init_data(t_data *data)
{
	int	i;

	i = -1;
	data->kill = 0;
	data->philo = calloc(data->s_arg.nb_philo, sizeof(t_philo));
	data->forks = calloc(data->s_arg.nb_philo, sizeof(t_philo));
	data->mutex = calloc(data->s_arg.nb_philo, sizeof(pthread_mutex_t));
	if (!data->forks || !data->philo || !data->mutex)
		return (false);
	while (++i < data->s_arg.nb_philo)
	{
		data->forks[i] = true;
		if (pthread_mutex_init(&data->mutex[i], NULL) != 0)
			return (false);
		init_philo(data, i);
	}
	if (pthread_mutex_init(&data->print, NULL) != 0)
		return (false);
	return (true);
}

t_data	*init_struct(int ac, char **av)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	get_data(data);
	init_args(&data->s_arg, av, ac);
	if (data->s_arg.nb_philo < 0 || data->s_arg.t_die < 0
		|| data->s_arg.t_eat < 0 || data->s_arg.t_die < 0)
	{
		printf(RED "Invalid argument" RST);
		return (NULL);
	}
	gettimeofday(&data->start, NULL);
	if (data->s_arg.nb_philo == 1)
	{
		usleep(data->s_arg.t_die * 1000);
		printf(RED "%ld %d died\n" RST, get_time(), 1);
		return (NULL);
	}
	if (!init_data(data))
		return (NULL);
	return (data);
}
