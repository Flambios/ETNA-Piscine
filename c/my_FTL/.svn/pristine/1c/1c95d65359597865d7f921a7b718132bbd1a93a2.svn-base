##
## ETNA PROJECT, 07/11/2018 by simon_c
## makefile
## File description:
##      [...]
##


CC      =   gcc

NAME    =   my_ftl

RM      =   rm -f

CFLAGS  =   -Wall -Wextra -Werror -g3 -std=gnu99 -I include

SRC     =   \
            main.c      \
            src/air_shed.c  \
            src/my_string.c \
            src/my_readline.c \
            src/container.c \
            src/system_control.c \
            src/system_repair.c

OBJ     =   $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)
		$(RM) ~ ; $(RM) include/~ ; $(RM) src/*~
		$(RM) # ; $(RM) include/# ; $(RM) src/*#

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
