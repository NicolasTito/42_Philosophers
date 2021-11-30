/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:57:53 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 19:08:41 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_program(void)
{
	t_data *s_data;

	s_data = get_data(NULL);
	if (s_data->s_arg.nb_philo == 1)
	{
		usleep(s_data->s_arg.t_die * 1000);
		printf(RED "%ld %d died" RST, get_time(&s_data->start), 1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 5 && ac != 6)
	{
		printf(RED "!!!ARGUMENT ERROR💩!!!\n" RST);
		return (0);
	}
	init_struct(ac, av);
	start_program();
	return (0);
}
