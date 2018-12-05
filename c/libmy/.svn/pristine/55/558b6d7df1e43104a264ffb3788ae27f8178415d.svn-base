/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_putnbr_base
** File description:
**      [...]
*/

#include <stdlib.h>
#include <stdio.h>


void my_putchar(char c);
int my_strlen(char *str);

int main()
{
    my_putnbr_base(345678, "0123456789ABCDEF");
    my_putchar('\n');
    my_putnbr_base(35, "01");
    my_putchar('\n');
    my_putnbr_base(34565, "!))\\n");
    my_putchar('\n');
    my_putnbr_base(-35, "01");
    my_putchar('\n');
    my_putnbr_base(-35, "0123456789");
    my_putchar('\n');
    my_putnbr_base(0, "01");
    my_putchar('\n');
    return 0;
}

void my_putnbr_base(int n, char *base)
{
    int len = my_strlen(base);
    
    if (n < 0) {
        n *= -1;
        my_putchar('-');
    }
    if ( n >=10 ) {
        my_putnbr_base(n / len, base);
    }
    my_putchar(base[n % len] + '0');
}

