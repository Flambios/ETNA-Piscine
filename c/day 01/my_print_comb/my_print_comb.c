/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_print_comb
** File description:
**      display all the different of three different digits on a single line
*/
void my_putchar(char c);

void my_print_comb(void)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = '0' ; i < '8' ; i++) {
        for (j = i+1 ; j < '9' ; j++) {
            for (k = j+1 ; k <= '9' ; k++) {
                my_putchar(i);
                my_putchar(j);
                my_putchar(k);
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}
