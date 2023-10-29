CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

SRC = push_swap.c \
		fonctions.c \
		fonctions1.c \
		fonctions2.c \
		set_at_placeb.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) $(BONUSOBJ)

fclean : clean
	rm -rf $(NAME)

re : clean all
