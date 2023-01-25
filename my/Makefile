##
## EPITECH PROJECT, 2023
## my
## File description:
## Makefile
##

SRC	=	my_put_nbr.c \
		my_swap.c	\
		my_strlen.c	\
		my_getnbr.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_strncmp.c	\
		my_strstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CC	=	gcc

CFLAGS	=	-g -Wall -Wextra

all:
	$(CC) $(SRC) $(CFLAGS) -c
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	gcc test.c -L. -lmy -o test_bin $(CFLAGS)
