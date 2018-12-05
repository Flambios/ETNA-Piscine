/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_set_arr
** File description:
**      [...]
*/
void my_putchar(char c);

void my_set_arr(int arr[], int size, int value)
{
    for (int i = 0 ; i < size ; i++) {
        my_putchar(arr[i] = value);
    }
}
