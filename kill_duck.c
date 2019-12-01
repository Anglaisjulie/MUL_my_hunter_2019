/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** kill_duck.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Config.h>
#include "fonctions.h"
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int recovery_position (sfRenderWindow *window, duck_t *duck)
{
    sfVector2i pos_mouse;
    sfVector2f pos_duck;
    sfVector2f rec_duck;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_duck = sfSprite_getPosition(duck->sprite);
    rec_duck.x = pos_duck.x + 191;
    rec_duck.y = pos_duck.y + 135;
    if (pos_mouse.x >= pos_duck.x && pos_mouse.x <= rec_duck.x
        && pos_mouse.y >= pos_duck.y && pos_mouse.y <= rec_duck.y) {
        duck->life = 0;
        sfSprite_destroy(duck->sprite);
        sfTexture_destroy(duck->texture);
    }
}