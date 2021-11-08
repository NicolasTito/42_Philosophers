#ifndef P_STRUCT_H
# define P_STRUCT_H

#include "philo.h"

struct timeval start_eat;

typedef struct s_philo
{
	int		nb_philo;
	int		t_die;
	int		t_eat;
	int		t_sleep;
	int		kill;
}				t_philo

#endif
