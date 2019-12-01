/*
** EPITECH PROJECT, 2019
** Boostrap my_hunter
** File description:
** window.c
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "fonctions.h"

int main (void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    duck_t *duck = init_duck();
    cursor_t *cursor = init_cursor();
    fire_t *fire = init_fire();
    sfClock *clock = sfClock_create();
    int a = 0;

    window = sfRenderWindow_create(mode, "My Hunter", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        fonctions_duck(window, clock, duck);
        display_fire (window, duck, fire);
        fonctions_cursor(window, cursor);
    }
    sfRenderWindow_destroy(window);
    return (0);
}