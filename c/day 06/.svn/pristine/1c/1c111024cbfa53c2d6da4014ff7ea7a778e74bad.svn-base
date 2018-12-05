##
## ETNA PROJECT, 25/10/2018 by simon_c
## my_aff_up_params
## File description:
##      [...]
##

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

NAME 	= aff_up
RM 		= rm -f

SRC		= \
		 main.c \
		 my_aff_up_params.c \
		 my_putchar.c \
		 my_putstr.c \
		 my_strupcase.c \

OBJ 	= $(SRC:.c=.o)

all: $(OBJ)
	 $(CC) $(OBJ) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
