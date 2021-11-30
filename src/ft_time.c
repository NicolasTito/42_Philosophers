/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:40:29 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 22:58:35 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	get_time(t_time *start)
{
	t_time	s_time;

	gettimeofday(&s_time, NULL);
	return (((s_time.tv_sec - start->tv_sec) * 1000) \
	+ ((s_time.tv_usec - start->tv_usec) / 1000));
}
