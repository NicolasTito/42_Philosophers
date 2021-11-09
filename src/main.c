/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:57:53 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/09 01:12:59 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_program(t_data *data)
{

}

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac != 5 || ac != 6)
	{
		printf("!!!ARGUMENT ERROR💩!!!\n");
		return (0);
	}
	data = init_struct(ac, av);
	start_program(data);
	return (0);
}
