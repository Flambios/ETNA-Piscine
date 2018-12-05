/*
** ETNA PROJECT, 19/10/2018 by simon_c
** my_print_z
** File description:
**      this project allows to creates a function that return the letter 'z' if we enter the right number
*/
void my_putchar(char c);

void my_print_z(int nb)
{
    if (nb < 20 && nb > 6) {
            my_putchar('z');
        } else if (nb > -12) {
            my_putchar('z');
        } else if (nb > 17 && nb < 66) {
            my_putchar('z');
        } else if (nb > -24 && nb < 7) {
            my_putchar('z');
        } else if (nb > 50) {
            my_putchar('z');
        } else if (nb == 5 || nb == -6) {
            my_putchar('z');
    }
    my_putchar('\n');
}
