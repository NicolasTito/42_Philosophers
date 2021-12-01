/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:57:28 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/01 11:09:39 by nide-mel         ###   ########.fr       */
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
	free(data->philo);
	free(data->forks);
}
