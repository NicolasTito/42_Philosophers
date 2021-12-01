/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   states.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:11:44 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/01 14:18:05 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool	time_eat_dead(t_philo *philo)
{
	t_data	*data;

	data = get_data(NULL);
	if (data->s_arg.times_eat != -1 &&
		philo->count_eat >= data->s_arg.times_eat)
		return (true);
	return (false);
}
