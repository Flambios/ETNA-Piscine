/*
** ETNA PROJECT, 25/10/2018 by simon_c
** my_strupcase
** File description:
**      [...]
*/

char *my_strupcase(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] -= 32 ;
                }
            i++;
        }
    return str;
}
