/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:57:28 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/09 01:11:31 by nide-mel         ###   ########.fr       */
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
