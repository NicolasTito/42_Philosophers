/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_struct.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:10:48 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/04 17:04:14 by nide-mel         ###   ########.fr       */
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
}				t_arg;

typedef struct s_philo
{
	int				id;
	long			start_eat;
	long			start_sleep;
	long			start_think;
	int				count_eat;
	int				status;
	bool			*l_fork;
	bool			*r_fork;
	pthread_mutex_t	*l_mutex;
	pthread_mutex_t	*r_mutex;
	pthread_t		pthread;
}				t_philo;

typedef struct s_data
{
	int				kill;
	t_arg			s_arg;
	t_time			start;
	t_philo			*philo;
	bool			*forks;
	pthread_mutex_t	*mutex;
	pthread_mutex_t	print;
}				t_data;

#endif
