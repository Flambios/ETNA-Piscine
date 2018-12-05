/*
** ETNA PROJECT, 26/10/2018 by simon_c
** sokoban
** File description:
**      print_map
*/

#include "../lib/proto.h"

void print_map(char **map)
{
    int x = 0;
    
    while (map[x] != NULL) {
        my_putstr(map[x]);
        my_putstr("\n");
        x++;
    }
}
