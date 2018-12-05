/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_putstr
** File description:
**      [...]
*/

#include "../lib/proto.h"

void my_putstr(char *str)
{
    int i = 0;

    if (str == NULL)
        return;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
