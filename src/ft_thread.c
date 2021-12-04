/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thread.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:01:32 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/04 16:58:29 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_eating(t_philo *philo)
{
	t_data	*data;

	data = get_data(NULL);
	if (philo->r_fork && philo->l_fork && !philo_is_dead(philo))
	{
		pthread_mutex_lock(philo->l_mutex);
		pthread_mutex_lock(philo->r_mutex);
		if (!philo_is_dead(philo))
		{
			philo->r_fork = false;
			philo->l_fork = false;
			philo->status = eating;
			philo->start_eat = get_time();
			printf(PRE BLU MSG_FORK RST, get_time(), philo->id);
			printf(PRE BLU MSG_FORK RST, get_time(), philo->id);
			printf(PRE GRN MSG_EAT RST, get_time(), philo->id);
			ft_usleep(philo, philo->start_eat, data->s_arg.t_eat);
			philo->r_fork = (bool *)true;
			philo->l_fork = (bool *)true;
		}
		pthread_mutex_unlock(philo->l_mutex);
		pthread_mutex_unlock(philo->r_mutex);
	}
}

void	start_sleep(t_philo *philo)
{
	t_data	*data;

	if (philo_is_dead(philo))
		return ;
	else
	{
		data = get_data(NULL);
		philo->start_sleep = get_time();
		philo->status = sleeping;
		printf(PRE CYN MSG_SLEEP RST, get_time(), philo->id);
		ft_usleep(philo, philo->start_sleep, data->s_arg.t_sleep);
		philo->count_eat++;
	}
}

void	start_thik(t_philo *philo)
{
	if (philo_is_dead(philo))
		return ;
	else
	{
		philo->start_think = get_time();
		philo->status = thinking;
		printf(PRE YEL MSG_THINK RST, get_time(), philo->id);
	}
}

void	*routine(void *arg)
{
	t_philo	*philo;
	t_data	*data;

	philo = (t_philo *)arg;
	data = get_data(NULL);
	while (philo->status != dead)
	{
		if (philo_is_dead(philo))
			return (NULL);
		else if (philo->status == thinking && !philo_is_dead(philo))
			start_eating(philo);
		else if (philo->status == sleeping && !philo_is_dead(philo))
			start_thik(philo);
		else if (philo->status == eating && !philo_is_dead(philo))
			start_sleep(philo);
		if (time_eat_dead(philo))
			return (NULL);
	}
	return (NULL);
}
