/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** mouse.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Event.h>
#include <SFML/Graphics.h>
#include "fonctions.h"
#include <stdlib.h>

basic_t *init_cursor(game_t *game)
{
    game->cursor = malloc(sizeof(basic_t));
    game->cursor->texture = sfTexture_createFromFile("cursor.png", NULL);
    game->cursor->sprite = sfSprite_create();
    sfSprite_setTexture(game->cursor->sprite, game->cursor->texture, 1);
    return (game->cursor);
}

void change_mouse(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos;
    sfVector2f xy;

    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    pos = sfMouse_getPositionRenderWindow(window);
    xy.x = pos.x - 25;
    xy.y = pos.y - 25;
    sfSprite_setPosition(game->cursor->sprite, xy);
    sfRenderWindow_drawSprite(window, game->cursor->sprite, NULL);
}
