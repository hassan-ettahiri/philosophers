CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = philo

SRC = philo.c

OBJS = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) ${CFLAGS} $< -o $@

%.o:%.c philo.h
	$(CC) ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all