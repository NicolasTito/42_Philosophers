/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:57:28 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/03 11:22:33 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_data	*get_data(t_data *data)
{
	static t_data	*s_data = NULL;

	if (!s_data && data)
		s_data = data;
	return (s_data);
}

void	free_struct(t_data *data)
{
	int	i;

	i = -1;
	free(data->philo);
	free(data->forks);
	while (++i < data->s_arg.nb_philo)
		pthread_mutex_destroy(&data->mutex[i]);
	free(data->mutex);
}

bool	philo_is_dead(t_philo *philo)
{
	t_data	*data;

	data = get_data(NULL);
	if ((get_time() - philo->start_eat) >= data->s_arg.t_die && data->kill == 0)
	{
		philo->status = dead;
		data->kill = 1;
		printf(PRE RED MSG_DEAD RST, get_time(), philo->id);
		return (true);
	}
	if (data->kill == 1)
		return (true);
	return (false);
}

void	ft_usleep(t_philo *philo, long start, long sleep)
{
	while ((get_time() - start) <= sleep)
	{
		philo_is_dead(philo);
		if (philo->status == dead)
			return ;
	}
}
