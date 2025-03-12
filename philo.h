#ifndef PHILO_H
# define PHILO_H

#include <pthread.h>

typedef struct s_input
{
    int number_of_philosophers;
    int time_to_eat;
    int time_to_die;
    int time_to_sleep;
    int number_of_times_each_philosopher_must_eat;
}t_input;



#endif