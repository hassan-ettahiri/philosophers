#include "philo.h"

void set_inputs(t_input *input, int c, int i)
{
    if(i == 1)
    {
        if(c > 200)
            return (write(2, "Error: number of philo must be under 200...", 43), exit(1));
        input->number_of_philosophers = c;
    }
    if(i == 2)
        input->time_to_die = c;
    if(i == 3)
        input->time_to_eat = c;
    if(i == 4)
        input->time_to_sleep = c;
    if(i == 5)
        input->number_of_times_each_philosopher_must_eat = c;
}

void check_param(int ac, char **av, t_input *input)
{
    int i;
    long c;

    i = 1;
    while(i < ac)
    {
        c = ft_atoi((const char *)av[i]);
        if(c == 0)
            return (write(2, "Error: input must be between 1 and 2147483647...", 49), exit(1));
        if(c == -1)
            return (write(2, "Error: input must be positive...", 33), exit(1));
        set_inputs(input, c, i);
        i++;
    }
}

int main(int ac, char **av)
{
    t_input input;

    if(!(ac == 5 || ac == 6))
        return (write(2, "Error: invalid number of parameter...", 38), 1);
    check_param(ac, av, &input);
    printf("%d | %d | %d | %d | %d | ", input.number_of_philosophers, input.time_to_die, input.time_to_eat, input.time_to_sleep, input.number_of_times_each_philosopher_must_eat);
}
