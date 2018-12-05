/*
** ETNA PROJECT, 19/10/2018 by simon_c
** my_is_even
** File description:
**      return 1 if n=0 and 0 if n !=0
*/

int my_is_even(int n)
{
    if ((n % 2) == 0) {
        n = 1;
    } else {
        n = 0;
    }
    return n;
}
