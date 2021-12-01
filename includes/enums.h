/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:06:12 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/01 12:43:30 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

# include "philo.h"

typedef enum s_status
{
	dead = 0,
	sleeping = 1,
	eating = 2,
	thinking = 3
}			t_status;
#endif
