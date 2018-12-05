/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_nbrlen
** File description:
**      [...]
*/

#include "libmy.h"

int my_nbrlen(int n)
{
    int i = 0;
    
    if ( n == 0) {
        i = 1;
    } else {
        if ( n < 0){
        n *= -1;
        i = 1;
        }
        while (n > 0) {
            n /= 10;
            i++;
        }
    }
    return i;
}
