/*
** ETNA PROJECT, 22/10/2018 by simon_c
** my_pow_arr
** File description:
**      [...]
*/

int my_pow(int n, int p);

void my_pow_arr(int arr[], int size, int p)
{
    int i;
    for (i = 0 ; i < size ; i++) {
        my_pow(arr[i], p);
    }
    
}
