/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** game.c
*/

#include "fonctions.h"

void game_loop(sfRenderWindow *window, sfClock *clock, game_t *game)
{
    sfRenderWindow_clear(window, sfBlack);
    manage_event(window, game);
    if (game->button->pressed == 0) {
        background(window, game);
        if (game->dragon->life == 1){
            display_dragon(window, game, clock);
            dragon_move(game);
        }
    } else {
        background_menu(window, game);
        display_button(window, game);
    }
    change_mouse(window, game);
    sfRenderWindow_display(window);
}