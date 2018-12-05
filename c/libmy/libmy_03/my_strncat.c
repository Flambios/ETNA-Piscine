/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_strncat
** File description:
**      [...]
*/


#include <stdlib.h>
#include "libmy.h"

char *my_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    if ( dest == '\0') {
        return NULL;
    }
    if (n == 0) {
        return dest;
    }
    if (n < 0) {
        return dest;
    }

    while (dest[i]) {
        i++;
    }
    while (src[j] && j < n) {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
    return dest;
}

