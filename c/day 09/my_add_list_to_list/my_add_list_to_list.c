/*
** ETNA PROJECT, 26/10/2018 by simon_c
** my_add_list_to_list
** File description:
**      [...]
*/

#include "my_list.h"

void my_add_list_to_list(list_t **begin1, list_t *begin2)
{
    list_t **current = begin1;
    for (current->next != NULL) {
        current = current->next;
    }

    current->next = *begin2;
}
