/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** destroy.c
*/

#include "fonctions.h"

void destroy_menu(game_t *game)
{
    sfTexture_destroy(game->button->texture);
    sfSprite_destroy(game->button->sprite);
    sfTexture_destroy(game->menu->texture);
    sfSprite_destroy(game->menu->sprite);
}

void destroy_game(game_t *game)
{
    sfTexture_destroy(game->dragon->texture);
    sfSprite_destroy(game->dragon->sprite);
    sfTexture_destroy(game->cursor->texture);
    sfSprite_destroy(game->cursor->sprite);
    sfTexture_destroy(game->background->texture);
    sfSprite_destroy(game->background->sprite);
}