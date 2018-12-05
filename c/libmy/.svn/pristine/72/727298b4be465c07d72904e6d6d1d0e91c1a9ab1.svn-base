/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_getnbr
** File description:
**      [...]
*/

void my_putchar(char c);

int my_getnbr(char *str)
{
    int nb = 0;
    int nega = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '-') {
                nega *= -1;
            }
            i++;
        }
    while (str[i] != '\0')
        {
            if (str[i] >= '0' && str[i] <= '9')
                {
                    nb *= 10;
                    nb += str[i] - '0';
                    i++;
                } else {
                return (nb * nega);
            }
        }
    return (nb * nega);
    
}
