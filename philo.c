#include "philo.h"

void set_inputs(t_input *input, int c, int i)
{
    if(i == 1)
        input->number_of_philosophers = c;
    if(i == 2)
        input->time_to_die = c;
    if(i == 3)
        input->time_to_eat = c;
    if(i == 4)
        input->time_to_sleep = c;
    if(i == 5)
        input->number_of_times_each_philosopher_must_eat = c;
    else
        input->number_of_times_each_philosopher_must_eat = -1;
}

int check_param(int ac, char **av, t_input *input)
{
    int i;
    int c;

    i = 1;
    while(i < ac)
    {
        c = ft_atoi((const char *)av[i]);
        if(c == 0)
            return (write(2, "Error: input must be between 1 and 2147483647...", 49), 1);
        if(c == -1)
            return (write(2, "Error: input must be positive...", 33), 1);
        set_inputs(input, c, i);
        i++;
    }
    return (0);
}
// parsing check only numbers, if not return error;
int check_num(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            if(!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '+' || av[i][j] == '-'))
                return (write(2, "Error: input must be a number...", 33), 1);
            j++;
        }
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    t_input input;

    if(!(ac == 5 || ac == 6))
        return (write(2, "Error: invalid number of parameter...", 38), 1);
    if(check_num(ac,av) == 1 || check_param(ac, av, &input) == 1)
        return 1;
    printf("%d | %d | %d | %d | %d | ", input.number_of_philosophers, input.time_to_die, input.time_to_eat, input.time_to_sleep, input.number_of_times_each_philosopher_must_eat);
}
