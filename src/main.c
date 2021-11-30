/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:57:53 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 22:43:20 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// void	start_thread(t_data *data)
// {
// 	int	i;

// 	i = -1;
// }

void	start_program(int ac, char **av)
{
	t_data	*s_data;

	s_data = init_struct(ac, av);
	if (!s_data)
		return ;
	// start_thread(s_data);
}

int	main(int ac, char **av)
{
	if (ac != 5 && ac != 6)
	{
		printf(RED "!!!ARGUMENT ERROR💩!!!\n" RST);
		return (0);
	}
	start_program(ac, av);
	return (0);
}
