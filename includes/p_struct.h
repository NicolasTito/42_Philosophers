/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_struct.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:10:48 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/09 01:11:18 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_STRUCT_H
# define P_STRUCT_H

# include "philo.h"

typedef struct s_philo
{
	int			nb_philo;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	int			times_eat;
	int			kill;
}				t_philo;

typedef struct s_data
{
	t_philo			s_philo;
	struct timeval	start_eat;
}					t_data;

#endif
