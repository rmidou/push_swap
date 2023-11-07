CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
NAME = push_swap
M_SRCS = push_swap.c \
		fonctions.c \
		fonctions1.c \
		utils.c \
		maximum.c \
		minimum.c \
		optimisation.c \
		sort.c \
		set_at_placeb.c \
		set_at_place.c \
		filling.c \

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