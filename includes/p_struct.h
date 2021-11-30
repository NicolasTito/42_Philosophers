/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_struct.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:10:48 by nide-mel          #+#    #+#             */
/*   Updated: 2021/11/30 21:01:59 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_STRUCT_H
# define P_STRUCT_H

# include "philo.h"

typedef struct timeval	t_time;

typedef struct s_arg
{
	int			nb_philo;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	int			times_eat;
	int			kill;
}						t_arg;

typedef struct s_philo
{
	int			id;
	long		start_eat;
	long		start_sleep;
	int			status;
	t_bool		*l_fork;
	t_bool		*r_fork;
}				t_philo;

typedef struct s_data
{
	t_arg		s_arg;
	t_time		start;
	t_philo		*philo;
	t_bool		*forks;
}						t_data;

#endif
