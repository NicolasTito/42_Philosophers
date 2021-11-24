/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:57:53 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/09 21:07:22 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_program(void)
{

}

int	main(int ac, char **av)
{
	if (ac != 5 || ac != 6)
	{
		printf(RED, "!!!ARGUMENT ERROR💩!!!\n", RST);
		return (0);
	}
	init_struct(ac, av);
	start_program();
	return (0);
}
