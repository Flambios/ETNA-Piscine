/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_strlen
** File description:
**      [...]
*/

int my_strlen(char *str)
{
    int index = 0 ;
    while (str[index] != '\0') {
        index = index + 1;
    }
    return index;
}
