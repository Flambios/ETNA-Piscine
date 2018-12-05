/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_putnbr
** File description:
**      [...]
*/

char my_putchar(char c);

void my_putnbr(int n)
{
    if (n != -2147483648)
        {
            if (n < 0) {
                my_putchar('-');
                n *= -1;
            }
            if (n >= 10) {
                my_putnbr(n / 10);
            }
            my_putchar((n % 10) + '0');
        } else {
        my_putstr("-2147483648");
    }
}
