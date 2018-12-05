/*
** ETNA PROJECT, 07/11/2018 by simon_c
** container.c
** File description:
**      [...]
*/

#include <stdlib.h>
#include <unistd.h>
#include "ftl.h"

int add_container_to_ship(ship_t *new_ship)
{
    container_t *new_cont = malloc(sizeof(container_t));

    my_putstr("adding the current container...\n");
    if (new_cont == NULL) {
        my_putstr("your ship exploded when you put the container down\n");
        return (0);
    }
    new_cont->first = NULL;
    new_cont->last = NULL;
    new_cont->nb_elem = 0;
    my_putstr("the container was successfully added\n");
    new_ship->cont = new_cont;
    return (1);    
}

void add_freight_to_container(ship_t *new_ship, freight_t *new_freight)
{
    if (new_ship->cont->first == NULL) {
        new_ship->cont->first = new_freight;
        new_ship->cont->last = new_freight;
        new_ship->cont->first->prev = NULL;
        new_ship->cont->first->next = NULL;
    } else {
        new_freight->next = NULL;
        new_freight->prev = new_ship->cont->last;
        new_ship->cont->last->next = new_freight;
        new_ship->cont->last = new_freight;
    }
    new_ship->cont->nb_elem += 1;
}

void del_freight_from_container(ship_t *new_ship, freight_t *new_freight)
{
    if (new_ship->cont->nb_elem > 0) {
        if (new_ship->cont->first == new_ship->cont->last);
        else if (new_freight == new_ship->cont->first) {
            new_freight->prev->next = new_freight->next;
            new_freight->next->prev = NULL;
        } else if (new_freight == new_ship->cont->last){
            new_freight->prev->next = NULL;
            new_freight->next->prev = new_freight->prev;
        } else {
            new_freight->prev->next = new_freight->next;
            new_freight->next->prev = new_freight->prev;
        }
        free(new_freight);
        new_ship->cont->nb_elem -= 1;
    }
}

void get_bonus(ship_t *new_ship)
{
    freight_t *freight;
    freight = malloc(sizeof(freight_t));
    freight = new_ship->cont->first;

    while (freight != NULL) { 
        if (my_strcmp(new_ship->cont->first->item, "evadebonus")) {
            new_ship->navig->evade += 3;
        } else if (my_strcmp(new_ship->cont->first->item, "attackbonus")) {
            new_ship->weapon->damage += 5;
        } else if (my_strcmp(new_ship->cont->first->item, "energy")) {
            new_ship->drive->energy += 1;
        }
        freight = freight->next;
    }
    del_freight_from_container(new_ship, freight); 
}
