CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
NAME = push_swap
M_SRCS = main.c \
		fonctions.c \
		fonctions1.c \
		fonctions2.c \
		set_at_placeb.c \
		set_at_place.c \
		optimisation.c \

M_OBJS = $(M_SRCS:.c=.o)
all : $(NAME) clean

$(NAME) : $(M_OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(M_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all