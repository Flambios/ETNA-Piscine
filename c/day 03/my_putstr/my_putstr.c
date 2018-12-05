/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_putstr
** File description:
**      [...]
*/
#include <stdio.h>
void my_putchar(char c);
void my_putstr(char *str)
{
    
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
