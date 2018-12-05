/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_putnbr_base
** File description:
**      [...]
*/

#include "libmy.h"

void my_putnbr_base(int n, char *base)
{
    int len = my_strlen(base);

    if (n < 0) {
        n *= -1;
        my_putchar('-');
    }
    if ( n >=len ) {
        my_putnbr_base(n / len, base);
    }
    my_putchar(base[n % len]);
}

