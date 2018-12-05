/*
** ETNA PROJECT, 19/10/2018 by simon_c
** my_next_char
** File description:
**      write a function that take a character as parameter and returns the next one
*/
void my_putchar(char c);

char my_next_char(char c)
{
    if (c == 90) {
        c = 65;
    } else if (c == 122) {
        c = 97;
    } else if ((c > 64 && c < 91) || (c > 96 && c < 123)) {
        c += 1;
    } else  {
        c = 32;
    }
    return c;
}
