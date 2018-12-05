/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_strcmp
** File description:
**      [...]
*/

#include "libmy.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while (s1[i] != '\0' || s2[i] != '\0') {        
        if (s1[i] > s2[i]) {
            return 1;
        } else if (s1[i] < s2[i]) {
            return -1;
        }
        i++;
    }
    return 0;
}
