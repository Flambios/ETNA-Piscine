/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_str_is_printable
** File description:
**      [...]
*/


int my_str_is_printable(char *str)
{
    int i = 0;
    int ok = 1;
    while (str[i] != '\0') {
        if ((str[i] < 31 && str[i] > 0) || (str[i] > 126)) {
            ok = 0;
            break;
        } 
        i++;
    }
    return (ok);
}

