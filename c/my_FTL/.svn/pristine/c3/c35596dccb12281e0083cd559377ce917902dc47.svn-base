/*
** ETNA PROJECT, 07/11/2018 by simon_c
** ftl.h
** File description:
**      [...]
*/

#ifndef FTL_H_
#define FTL_H_

#include <stdlib.h>
#include <unistd.h>

typedef struct enemey_s {
    int life;
    int dammage;
} enemy_t;

typedef struct weapon_s {
    char *system_state;
    int damage;
} weapon_t;

typedef struct ftl_drive_s {
    char *system_state;
    int energy;
} ftl_drive_t;

typedef struct navigation_tools_s {
    char *system_state;
    int sector;
    int evade;
} navigation_tools_t;

typedef struct freight_s {
    char *item;
    struct freight_s *next;
    struct freight_s *prev;
} freight_t;

typedef struct container_s {
    freight_t *first;
    freight_t *last;
    int nb_elem;
} container_t;

typedef struct ship_s {
    int hull;
    weapon_t *weapon;
    ftl_drive_t *drive;
    navigation_tools_t *navig;
    container_t *cont;
} ship_t;

typedef struct repair_command_s {
    char *repair;
    void (*rep)(ship_t *ship);
} repair_command_t;


ship_t* create_ship();
char *my_strdup(const char *str);
char *my_readline(void);
int my_strlen(const char *str);
int my_strcmp(const char *s1, const char *s2);
int add_weapon_to_ship(ship_t *ship);
int add_ftl_drive_to_ship(ship_t *ship);
int add_navigation_tools_to_ship(ship_t *ship);
int add_container_to_ship(ship_t *ship);
void my_putstr(const char *str);
void my_putchar(const char c);
void my_putstr_color(const char *color, const char *str);
void add_freight_to_container(ship_t *ship, freight_t *freight);
void del_freight_from_container(ship_t *ship, freight_t *freight);
void ftl_drive_system_check(ship_t *ship);
void navigation_tools_system_check(ship_t *ship);
void weapon_system_check(ship_t *ship);
void system_control(ship_t *ship);
void ftl_drive_system_repair(ship_t *ship);
void navigation_tools_system_repair(ship_t *ship);
void weapon_system_repair(ship_t *ship);
void system_repair(ship_t *ship);
void get_bonus(ship_t *new_ship);

#endif
