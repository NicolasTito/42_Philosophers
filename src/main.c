/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:57:53 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/08 19:45:57 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_program(char **av)
{
	
}

int	main(int ac, char **av)
{
	if (ac != 5 || ac != 6)
	{
		printf("!!!ARGUMENT ERROR💩!!!\n");
		return (0);
	}
	start_program(av);
	return (0);
}
