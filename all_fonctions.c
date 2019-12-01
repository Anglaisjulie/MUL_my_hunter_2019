/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** all_fonction.c
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "fonctions.h"

void fonctions_duck (sfRenderWindow *window, sfClock *clock, duck_t *duck)
{
    sfRenderWindow_clear(window, sfBlack);
    background(window);
    if (duck->life == 1) {
        display_duck(window, duck, clock);
    }
    move_duck(duck);
    manage_event(window, duck);
}

void fonctions_cursor (sfRenderWindow *window, cursor_t *cursor)
{
    change_mouse(window, cursor);
    sfRenderWindow_display(window);
}