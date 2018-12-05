/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_sort_intarr
** File description:
**      [...]
*/

void my_putchar(char c);
void my_sort_intarr(int arr[], int size)
{
    int i = 0;
    int j = 0;
    for (i = 0 ; i < size ; i++) {
        for (j = 0 ; j < size-i ; j++) {            
            if (arr[j] < arr[j]) {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
            
}
