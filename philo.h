#ifndef PHILO_H
# define PHILO_H

#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_input
{
    int number_of_philosophers;
    int time_to_eat;
    int time_to_die;
    int time_to_sleep;
    int number_of_times_each_philosopher_must_eat;
}t_input;

size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
long	ft_atoi(const char *s);

#endif