/*
** ETNA PROJECT, 19/10/2018 by simon_c
** my_prev_char
** File description:
**      take a character as a parametre and returns the previous one
*/
void my_putchar(char c);

char my_prev_char(char c)
{
    if (c == 65){
        c = 90;
    } else if (c == 97){
        c = 122;
    } else if ((c > 64 && c < 91) || (c > 96 && c < 123)){
        c -= 1;
    } else {
        c = 32;
    }
    return c;
}
