/*
** ETNA PROJECT, 26/10/2018 by simon_c
** my_getnbr_base
** File description:
**      [...]
*/


#include "libmy.h"

int nombreCaracteress(char* str)
{
    int len = 0;
    int i = 0;
    while (str[i] !='\0') {
        len ++;
        i++;
    }
    return len;
}

int exist(char x,char* str)
{
    int i = 0;
    while (str[i] !='\0') {
        if(x == str[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

int  my_getnbr_base(char* str,char* base)
{
    int negatif = 1;
    int tmp = 0;
    int resultat = 0;
    int i = 0;
    int j=0;
    int nbrBase = nombreCaracteress(base);
    int nbrStr = nombreCaracteress(str);

    if (nbrBase == 0 || nbrStr == 0) {
        return 0;
    }

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            negatif = negatif * -1;
            i = i + 1;
        }
        else {
            negatif =negatif * 1;
            i++;
        }
    }

    int indexfin = nbrStr;
    for (j = i; j <= nbrStr ; j++) {
        if(! exist(str[j],base)) {
            indexfin = j;
            break;
        }
    }


    while (i < indexfin) {
        tmp = 1;
        for (j = 1; j <indexfin - i ; j++) {
            tmp = tmp * nbrBase;
        }

        for (j = 0; j < nbrBase ; j++) {
            if(str[i] == base[j]) {
                tmp = tmp * j;
            }
        }

        resultat += tmp ;
        i++;
    }
    return (resultat  * negatif);
}
