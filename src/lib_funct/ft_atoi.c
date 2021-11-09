/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:48:06 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/08 22:34:58 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *str)
{
	int			is_n;
	long int	rest;

	is_n = 1;
	rest = 0;
	if (*str == '0')
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_n *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		rest = (rest * 10) + (*(str++) - '0');
		if (rest > 2147483647)
			return (-1);
		if (rest < -2147483648)
			return (0);
	}
	return (rest * is_n);
}
