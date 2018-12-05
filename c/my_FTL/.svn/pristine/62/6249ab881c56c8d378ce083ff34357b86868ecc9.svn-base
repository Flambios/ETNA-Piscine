/*
** ETNA PROJECT, 15/11/2018 by simon_c
** system_repair
** File description:
**      [...]
*/


#include "ftl.h"

static const repair_command_t tab[] = {
    {"ftl_drive", ftl_drive_system_repair},
    {"weapon", weapon_system_repair},
    {"navigation_tools", navigation_tools_system_repair},
    {NULL, NULL}
};


void ftl_drive_system_repair(ship_t *new_ship)
{
    char *arg = "online";
    my_putstr("repair of the reactor in progress...\n");
    if (my_strcmp(new_ship->drive->system_state, arg) == 0) {
        my_putstr("repair complete! reactor system OK!\n");
    } else {
        my_putstr("the reactor repairs failed\n");
    }
}

void navigation_tools_system_repair(ship_t *new_ship)
{
    char *arg = "online";
    my_putstr("repair of the navigation tools system in progress...\n");
    if (my_strcmp(new_ship->navig->system_state, arg) == 0) {
        my_putstr("repair complete! navigation tools system OK!\n");
    } else {
        my_putstr("the navigation tools repairs failed\n");
    }
    
}

void weapon_system_repair(ship_t *new_ship)
{
    char *arg = "online";
    my_putstr("repair of the weapon system in progress...\n");
    if (my_strcmp(new_ship->weapon->system_state, arg) == 0) {
        my_putstr("repair complete! weapon system OK!\n");
    } else {
        my_putstr("the weapon system repairs failed\n");
    }
    
}

void system_repair(ship_t *new_ship)
{
    int i = 0;
    my_putstr("repair_system~>");
    char *recup = my_readline();
    int a = 0;
    
    if( recup == NULL || my_strcmp(recup, "") == 0) {
        my_putstr("[SYSTEM FAILURE]: the control reader is blocked\n");
    } else {
        while (tab[i].repair != NULL) {
            if( my_strcmp(tab[i].repair, recup) == 0) {
                tab[i].rep(new_ship);
                a = 1;
            } 
            i++;
        }
        if (a != 1){
            my_putstr("[SYSTEM FAILURE]: unknown command\n");
        }
        
    }
}
