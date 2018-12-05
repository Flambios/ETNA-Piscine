/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_sum_params
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

char *my_sum_params(int argc, char **argv)
{
    int i;
    char *tab;
    int size;
    
    for (i = 0 ; i < argc ; i++) {
        size += my_strlen(argv[i]) + 1;
    }
    tab = malloc(sizeof(char) * size);
    
    for (i = 0 ; i < argc ; i++) { 
        my_strcat(tab, argv[i]);
        my_strcat(tab, "\n");
    }
    tab[size-1] = '\0';
    return (tab);
}
