##
## ETNA PROJECT, 25/10/2018 by simon_c
## makefile
## File description:
##      makefile
##

CC		= gcc
CFLAGS  = -Wall -Wextra -Werror

NAME	= libmy.a
RM		= rm -f

SRC		= \
		my_strlen.c \
		my_putstr.c \
		my_putchar.c \
		my_getnbr.c \
		my_putnbr.c \
		my_is_neg.c \
		my_is_odd.c \
		my_is_even.c \
		my_swap.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
