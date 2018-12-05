/*
** ETNA PROJECT, 26/10/2018 by simon_c
** upper_char
** File description:
**      [...]
*/

#include "../lib/proto.h"

char upper_char(char move)
{
    char tmp = move;

    if (tmp >= 'a' && tmp <= 'z')
        tmp = tmp - 32;
    return tmp;
}
