/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_nbrlen_base
** File description:
**      [...]
*/

int my_nbrlen_base(int n, int base)
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
            n /= base;
            i++;
        }
    }
    return i;
}
