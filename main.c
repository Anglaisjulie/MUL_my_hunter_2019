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
    fire_t *fire1 = init_fire1();
    fire_t *fire2 = init_fire2();
    fire_t *fire3 = init_fire3();
    fire_t *fire4 = init_fire4();
    fire_t *fire5 = init_fire5();
    sfClock *clock = sfClock_create();

    window = sfRenderWindow_create(mode, "My Hunter", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        fonctions_duck(window, clock, duck);
        display_fire12 (window, duck, fire1, fire2);
        display_fire34 (window, duck, fire3, fire4);
        display_fire5 (window, duck, fire5);
        fonctions_cursor(window, cursor);
    }
    sfRenderWindow_destroy(window);
    return (0);
}
// réduire le nb de ligne = 21
// pb au niveau de la limite bord beug sur le rebondissement
// abort quand -1 flamme