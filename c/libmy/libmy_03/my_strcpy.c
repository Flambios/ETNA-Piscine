/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_strcpy
** File description:
**      [...]
*/

#include "libmy.h"

char *my_strcpy(char *dest, char *src) {
    int i = 0;
    for (i = 0 ; src[i] != '\0' ; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
