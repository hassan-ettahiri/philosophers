#include "philo.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t'
		|| c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

long	ft_atoi(const char *s)
{
	int	num;
	int	tmp;
	size_t	i;

	i = 0;
	num = 0;
	tmp = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-')
		return (0);
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		tmp = (num * 10) + (s[i++] - 48);
		if (tmp < num)
			return (0);
		num = tmp;
	}
	return (num);
}
