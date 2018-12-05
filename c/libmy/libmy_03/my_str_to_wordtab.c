/*
** ETNA PROJECT, 26/10/2018 by simon_c
** my_str_to_wordtab
** File description:
**      [...]
*/

#include <stdlib.h>
#include <unistd.h>
#include "my_macro.h"
#include "libmy.h"

int taillemot(char *str, int i)
{
    int cmp = 0;

    while (str[i] != '\0' && MY_IS_ALPHANUM(str[i])) {
        cmp++;
        i++;
    }
    return (cmp);
}

int nbrMots(char *str)
{
    int i = 0;
    int cmp = 0;

    while (MY_IS_ALPHANUM(str[i]) == 0 && str[i] != '\0') {
        i++;
    }
    while (str[i]!='\0') {
        while (str[i] != '\0' && MY_IS_ALPHANUM(str[i])) {
            i++;
        }
        cmp++;
        while (str[i] != '\0' && !MY_IS_ALPHANUM(str[i])) {
            i++;
        }
    }
    return (cmp);
}
char my_str_to_wordtab(char *s)
{
    char tab;
    int i = 0;
    int j = 0;
    int k = 0;

    tab = malloc((nbrMots(s) + 1) * sizeof(char *));
    while ((MY_IS_ALPHANUM(s[i]) == 0) && (s[i] != '\0')) {
        i++;
    }
    while (s[i] != '\0') {
        k = 0;
        tab[j] = malloc((taillemot(s, i) + 1) * sizeof(char));
        while (s[i] != '\0' && MY_IS_ALPHANUM(s[i]))  {
            tab[j][k] = s[i];
            i++;
            k++;
        }
        while (s[i] != '\0' && ! MY_IS_ALPHANUM(s[i])) {
            i++;
        }
        tab[j][k] = '\0';
        j++;
    }
    tab[j] = '\0';
    return (tab);
}
