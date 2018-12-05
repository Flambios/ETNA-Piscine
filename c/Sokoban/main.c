/*
** ETNA PROJECT, 26/10/2018 by simon_c
** Sokoban
** File description:
**      main
*/

#include "lib/proto.h"


int check_win(char **map)
{
    int i;
    int j;

    for (i = 0; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'O')
                return 0;
        }
    }
    return 1;
}

int check_map(char **map)
{
    int i;
    int j;
    int c_p = 0;
    int c_x = 0;
    int c_o = 0;

    for (i = 0; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'P')
                c_p = c_p + 1;
            else if (map[i][j] == 'O')
                c_o = c_o + 1;
            else if (map[i][j] == 'X')
                c_x = c_x + 1;
        }
    }
    if (c_p != 1) {
        my_putstr("To much player!\n");
        return 1;
    } else if (c_o != c_x) {
        my_putstr("Box > Case or Case > Box !\n");
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    char **map = NULL;
    char *letter = NULL;

    if (argc != 2) {
        my_putstr("Usage: ./sokoban [FILE]\n");
        return 1;
    }
    map = allocate_map(argv[1]);
    if (check_map(map) == 1)
        return 1;
    while (check_win(map) == LOOSE) {
        print_map(map);
        my_putstr("Input: ");
        letter = read_line();
        my_putstr("/* User enter '");
        my_putstr(letter);
        my_putstr("' */\n");
        map = enter(map, letter);
    }
    return 0;
}
