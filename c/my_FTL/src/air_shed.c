/*
** ETNA PROJECT, 07/11/2018 by simon_c
** air_shed.c
** File description:
**      [...]
*/

#include <stdlib.h>
#include <unistd.h>
#include "ftl.h"

int add_navigation_tools_to_ship(ship_t *new_ship)
{
    navigation_tools_t *new_navig = malloc(sizeof(navigation_tools_t));

    my_putstr("adding navigation tools...\n");
    if (new_navig == NULL) {
        my_putstr("your ship exploded when you put in the navigation tools \n");
        return (0);
    }
    new_navig->sector = 10;
    new_navig->evade = 25;
    new_navig->system_state = my_strdup("online");
    my_putstr("navigation tools were successfully added\n");
    new_ship->navig = new_navig;
    return (1);
}

int add_ftl_drive_to_ship(ship_t *new_ship)
{
    ftl_drive_t *new_drive = malloc(sizeof(ftl_drive_t));

    my_putstr("adding the reactor in progress...\n");
    if (new_drive == NULL) {
        my_putstr("your ship exploded when you put the reactor in \n");
        return (0);
    }
    new_drive->energy = 10;
    new_drive->system_state = my_strdup("online");
    my_putstr("the reactor was successfully added!\n");
    new_ship->drive = new_drive;
    return (1);
}

int add_weapon_to_ship(ship_t *new_ship)
{
    weapon_t *new_weapon = malloc(sizeof(weapon_t));

    my_putstr("adding weapons in progress...\n");
    if (new_weapon == NULL) {
        my_putstr("your ship exploded when you tried to add the weapons \n");
        return (0);
    }
    new_weapon->damage = 10;
    new_weapon->system_state = my_strdup("online");
    my_putstr("weapons were successfully added!\n");
    new_ship->weapon = new_weapon;      
    return (1);
}

ship_t *create_ship()
{
    ship_t *new_ship = malloc(sizeof(ship_t));
    my_putstr("building of the ship in progress...\n");
    if (new_ship == NULL) {
         my_putstr("the ship could not be built due to lack of materials \n");
         return (0);
    } 
    new_ship->hull = 50;
    my_putstr("ship improvement is finished!\n");
    new_ship->weapon = NULL;      
    new_ship->drive = NULL;
    new_ship->navig = NULL;
    new_ship->cont = NULL;
    return (new_ship);
}
