/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_strdup
** File description:
**      [...]
*/

#include "libmy.h"
#include <unistd.h>
#include <stdlib.h>

char *my_strdup(char *str)
{
    int size;
    char *up;

    size = my_strlen(str) + 1;
    up = malloc(sizeof(char) * size);
    if(up == NULL) {
        return (NULL);
    }

    up = my_strcpy(up, str);
    up[size-1] = '\0';
    return (up);
}
