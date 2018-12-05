/*
** ETNA PROJECT, 07/11/2018 by simon_c
** system_control
** File description:
**      [...]
*/

#include "ftl.h"

void ftl_drive_system_check(ship_t *new_ship)
{
    char *arg = "online";
    my_putstr("checking the reactor in progress...\n");
    if (my_strcmp(new_ship->drive->system_state, arg) == 0) {
        my_putstr("reactor OK!\n");
    } else {
        my_putstr("reactor out of order!\n");
    }
}

void navigation_tools_system_check(ship_t *new_ship)
{
    char *arg = "online";
    my_putstr("checking the navigation tools in progress...\n");
    if (my_strcmp(new_ship->navig->system_state, arg) == 0) {
        my_putstr("navigation tools OK!\n");
    } else {
        my_putstr("navigation tools out of order!\n");
    }
    
}

void weapon_system_check(ship_t *new_ship)
{
    char *arg = "online";
    my_putstr("checking the weapon system in progress...\n");
    if (my_strcmp(new_ship->weapon->system_state, arg) == 0) {
        my_putstr("weapon system OK!\n");
    } else {
        my_putstr("weapon system out of order!\n");
    }
    
}

void system_control(ship_t *new_ship)
{
    
    ftl_drive_system_check(new_ship);
    navigation_tools_system_check(new_ship);
    weapon_system_check(new_ship);
    
}
