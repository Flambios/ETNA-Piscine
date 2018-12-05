/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_strstr
** File description:
**      [...]
*/

#include "libmy.h"

char *my_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int k = 0;

    if ( str[i] != '\0' && to_find[j] != '\0') {
        if (to_find[j]  == str[i]) {
            if (k ==0) {
                k = 1;
            }
            i++;
            j++;
        } else if (k !=0) {
            return ("null");
        } else {
            i++;
        }
    }
    if (k == 0) {
        return ("null");
    }
    str[j + k] = '\0';
    return (&str[k]);
}
