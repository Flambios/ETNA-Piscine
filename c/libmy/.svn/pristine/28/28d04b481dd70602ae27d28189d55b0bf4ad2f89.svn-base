/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_strcat
** File description:
**      [...]
*/


#include <stdlib.h>
#include "libmy.h"

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    if ( dest == '\0') {
        return NULL;
    }

    while (dest[i]) {
        i++;
    }
    while (src[j]) {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
    return dest;
}

