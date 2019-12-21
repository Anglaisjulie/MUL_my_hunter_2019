/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** menu.c
*/

#include "fonctions.h"

void background_menu(sfRenderWindow *window, game_t *game)
{
    game->menu = malloc(sizeof(basic_t));
    game->menu->texture = sfTexture_createFromFile
                                        ("menu.jpg", NULL);
    game->menu->sprite = sfSprite_create();
    sfSprite_setTexture(game->menu->sprite, game->menu->texture, 1);
    sfRenderWindow_drawSprite(window, game->menu->sprite, NULL);
}

basic_t init_button(game_t *game, int n, char *path, float x)
{
    game->button[n].texture = sfTexture_createFromFile(path, NULL);
    game->button[n].sprite = sfSprite_create();
    sfSprite_setTexture(game->button[n].sprite, game->button[n].texture, 1);
    game->button[n].vector.x = x;
    game->button[n].vector.y = 800;
    sfSprite_setPosition(game->button[n].sprite, game->button[n].vector);
    return (game->button[n]);
}

void create_button(game_t *game)
{
    game->button = malloc(sizeof(basic_t) * 2);
    game->button[0] = init_button(game, 0, "play.png", 870.0);
    game->button[1] = init_button(game, 1, "exit.png", 50.0);
}

void init_display_button(sfRenderWindow *window, game_t *game, int n)
{
    sfRenderWindow_drawSprite(window, game->button[n].sprite, NULL);
}

void display_button(sfRenderWindow *window, game_t *game)
{
    init_display_button(window, game, 0);
    init_display_button(window, game, 1);
}