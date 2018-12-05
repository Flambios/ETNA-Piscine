/*
** ETNA PROJECT, 25/10/2018 by simon_c
** limby_01
** File description:
**      [...]
*/

#ifndef PROTO_H_
#define PROTO_H_

#include <unistd.h>
#include <stdlib.h>

#define WIN 1
#define LOOSE 0

void my_putchar(char c);
void my_putstr(char *str);
void print_map(char **map);
int  my_strlen(char *str);
int  my_strcmp(char *s1, char *s2);
int check_win(char **map);
char upper_char(char move);
char **allocate_map(char *file);
char *read_line();
char **enter(char **map, char *line);
char **move_up(char **map);
char **move_down(char **map);
char **move_right(char **map);
char **move_left(char **map);
char **move_box(int i, int j, char **map);

#endif /* !PROTO_H_ */
