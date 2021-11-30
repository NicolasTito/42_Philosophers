/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:06:12 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 20:06:42 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

# include "philo.h"

typedef enum s_bool
{
	falso = 0,
	verdade = 1,
}			t_bool;

typedef enum s_status
{
	dead = 0,
	sleeping = 1,
	eating = 2,
}			t_status;
#endif
