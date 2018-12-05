/*
** ETNA PROJECT, 07/11/2018 by simon_c
** ftl
** File description:
**      main
*/

#include "ftl.h"


int main(void)
{
    ship_t *ship = create_ship();
    freight_t *freight = NULL;
    freight = malloc(sizeof(freight_t));
    
    add_weapon_to_ship(ship);
    add_ftl_drive_to_ship(ship);
    add_navigation_tools_to_ship(ship);
    add_container_to_ship(ship);
    add_freight_to_container(ship, freight);
    del_freight_from_container(ship, freight);
    get_bonus(ship);
    system_control(ship);
    ftl_drive_system_repair(ship);
    navigation_tools_system_repair(ship);
    weapon_system_repair(ship);
    system_repair(ship);
    
    return 0;
}
