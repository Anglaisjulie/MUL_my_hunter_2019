/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** background.c
*/

#include "fonctions.h"

void background(sfRenderWindow *window, game_t *game)
{
    game->background = malloc(sizeof(basic_t));
    game->background->texture = sfTexture_createFromFile("back.jpg", NULL);
    game->background->sprite = sfSprite_create();
    sfSprite_setTexture(game->background->sprite, game->background->texture, 1);
    sfRenderWindow_drawSprite(window, game->background->sprite, NULL);
}
