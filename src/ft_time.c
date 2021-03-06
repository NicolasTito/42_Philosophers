/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:40:29 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/02 00:24:00 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	get_time(void)
{
	t_data	*data;
	t_time	s_time;
	t_time	*start;

	data = get_data(NULL);
	start = &data->start;
	gettimeofday(&s_time, NULL);
	return (((s_time.tv_sec - start->tv_sec) * 1000) \
	+ ((s_time.tv_usec - start->tv_usec) / 1000));
}
