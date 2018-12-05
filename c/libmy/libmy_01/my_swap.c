/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_swap
** File description:
**      function that reveives two pointers to integer as parameters and swap the content of the two poin
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    int d = *b;
    *a = d;
    *b = c;
}
