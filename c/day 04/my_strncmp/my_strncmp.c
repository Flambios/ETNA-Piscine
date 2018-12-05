/*
** ETNA PROJECT, 24/10/2018 by simon_c
** my_strncmp
** File description:
**      [...]
*/

int my_strncmp(char *s1, char *s2, int n) {

    int i = 0;
        
    while (s1[i] != '\0' && i < n) {
        if (s1[i] > s2[i]) {
            return 1;
        } else if (s1[i] < s2[i]) {
            return -1;
        }
        i++;
    }
}
    
        
