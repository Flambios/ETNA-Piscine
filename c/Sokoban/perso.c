/*
** ETNA PROJECT, 26/10/2018 by simon_c
** perso
** File description:
**      [...]
*/

#include "lib/proto.h"

char **move_left(char **map)
{
    int i;
    int j;
    char tmp;

    for (i = 0; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P' && map[i][j - 1] != '#') {
                map = move_box(i, j - 1, map);
                tmp = map[i][j];
                map[i][j] = map[i][j - 1];
                map[i][j - 1] = tmp;
                return map;
            }
        }
    }
    return map;
}

char **move_right(char **map)
{
    int i;
    int j;
    char tmp;
    
    for (i = 0; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P' && map[i][j + 1] != '#') {
                map = move_box(i, j + 1, map);
                tmp = map[i][j];
                map[i][j] = map[i][j + 1];
                map[i][j + 1] = tmp;
                return map;
            }
        }
    }
    return map;
}

char **move_up(char **map)
{
    int i;
    int j;
    char tmp;
    
    for (i = 0; map[i] != '\0'; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P' && map[i - 1][j] != '#') {
                map = move_box(i - 1, j, map);
                tmp = map[i][j];
                map[i][j] = map[i - 1][j];
                map[i - 1][j] = tmp;
                return map;
            }
        }
    }
    return map;
}

char **move_down(char **map)
{
    int i;
    int j;
    char tmp;
    
    for (i = 0; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P' && map[i + 1][j] != '#') {
                map = move_box(i + 1, j, map);
                tmp = map[i][j];
                map[i][j] = map[i + 1][j];
                map[i + 1][j] = tmp;
                return map;
            }
        }
    }
    return map;
}

char **enter(char **map, char *line)
{
    if (line == NULL ||(my_strlen(line) > 1 || my_strlen(line) < 1)) {
        my_putstr("Use Z, S, Q, D only for move.\n");
        return map;
    }
    char move = upper_char(line[0]);
    switch(move) {
    case 'D':
        map =  move_right(map);
        break;
    case 'Q':
        map = move_left(map);
        break;
    case 'Z':
        map = move_up(map);
        break;
    case 'S':
        map = move_down(map);
        break;
    default:
        my_putstr("Use Z, S, Q, D only for move.\n");
    }
    return map;
}
