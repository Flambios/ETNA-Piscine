/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_print_digit
** File description:
**      print all the digit on a sigle line in ascending
*/
void my_putchar(char c);

void my_print_digit(void)
{
    for (int i = 48 ; i < 58 ; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
        
}
