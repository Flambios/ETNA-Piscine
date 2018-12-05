/*
** ETNA PROJECT, 22/10/2018 by simon_c	
** my_print_alpha
** File description:
**      print the alphabet in lowercase
*/
void my_putchar(char c);

void my_print_alpha(void)
{
    for (int i = 97 ; i < 123 ; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    
}
