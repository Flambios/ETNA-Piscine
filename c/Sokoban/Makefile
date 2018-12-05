##
## ETNA PROJECT, 26/10/2018 by simon_c
## Makefile
## File description:
##      [...]
##

CC 		=	gcc
CFLAGS 	= 	-Wall -Wextra -Werror

LIB		=	lib/lib_sokoban.a

NAME   	= 	sokoban
RM 		= 	rm -rf

SRC 	= 	\
		  	main.c				\
			perso.c				\
			source/print_map.c	\
		  	source/my_strlen.c	\
		  	source/my_putstr.c	\
		  	source/my_putchar.c	\
			source/my_strcmp.c 	\
			source/upper_char.c	\
			source/move_box.c

OBJ 	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME) $(LIB)

clean:
		$(RM) $(OBJ)
		$(RM) *~ ; $(RM) lib/*~ ; $(RM) source/*~
		$(RM) *# ; $(RM) lib/*#; $(RM) source/*#

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
