/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_strdup
** File description:
**      [...]
*/

#include <stdlib.h>

int my_strlen(char *str)
{
    int index = 0 ;
    while (str[index] != '\0') {
        index = index + 1;
    }
    return index;
}

char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    for (i = 0 ; src[i] != '\0' ; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}


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
