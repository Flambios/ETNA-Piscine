/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_pow
** File description:
**      [...]
*/

int my_pow(int n, int p)
{
    int valretour;
    int i;
    if (p == 0) {
        valretour = 1;
    } else if ( p < 0 ) {
        valretour = 0;
    } else {
        for (i = 1 ; i <= p ; i++) {
            valretour = n * n;
        }
    }
    return valretour;
}
