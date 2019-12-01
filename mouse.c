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

cursor_t *init_cursor(void)
{
    cursor_t *cursor = NULL;

    cursor = malloc(sizeof(cursor_t));
    cursor->text = sfTexture_createFromFile("cursor.png", NULL);
    cursor->sprite = sfSprite_create();
    sfSprite_setTexture(cursor->sprite, cursor->text, 1);
    return (cursor);
}

void change_mouse(sfRenderWindow *window, cursor_t *cursor)
{
    sfVector2i pos;
    sfVector2f xy;

    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    pos = sfMouse_getPositionRenderWindow(window);
    xy.x = pos.x - 25;
    xy.y = pos.y - 25;
    sfSprite_setPosition(cursor->sprite, xy);
    sfRenderWindow_drawSprite(window, cursor->sprite, NULL);
}
