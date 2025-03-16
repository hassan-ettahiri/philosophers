CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = philo

SRC = philo.c ft_strlen.c ft_strncmp.c ft_atoi.c

OBJS = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) ${CFLAGS} $(OBJS) -o $(NAME)

%.o: %.c philo.h
	$(CC) ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all