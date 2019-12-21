/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** menu_event.c
*/

#include "fonctions.h"

void recovery_position(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_button;
    sfVector2f rec_button;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_button = sfSprite_getPosition(game->button[n].sprite);
    rec_button.x = pos_button.x + 147;
    rec_button.y = pos_button.y + 148;
    if (pos_mouse.x >= pos_button.x && pos_mouse.x <= rec_button.x
        && pos_mouse.y >= pos_button.y && pos_mouse.y <= rec_button.y) {
        if (n == 0) {
            game->button->pressed = 0;
            sfTexture_destroy(game->button->texture);
            sfSprite_destroy(game->button->sprite);
            sfTexture_destroy(game->menu->texture);
            sfSprite_destroy(game->menu->sprite);
        }
        if (n == 1)
            sfRenderWindow_close(window);
    }
}