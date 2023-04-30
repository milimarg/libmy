##
## EPITECH PROJECT, 2023
## my
## File description:
## Makefile
##

SRC	=	my_str_to_word_array/my_str_to_word_array.c \
		my_str_to_word_array/my_str_to_word_array_separator.c \
		my_str_to_word_array/destroy_my_str_to_word_array.c \
		string/my_strcat.c \
		string/my_strcmp.c \
		string/my_strcpy.c \
		string/my_strlen.c \
		string/my_strncat.c \
		string/my_strncmp.c \
		string/my_strncpy.c \
		string/my_strstr.c \
		string/my_getnbr.c \
		memory/my_strdup.c \
		memory/my_strndup.c \
		memory/my_swap.c \
		memory/my_char_memset.c \
		display/my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
