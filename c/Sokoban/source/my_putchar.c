/*
** ETNA PROJECT, 26/10/2018 by simon_c
** my_putchar
** File description:
**      [...]
*/

#include "../lib/proto.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
