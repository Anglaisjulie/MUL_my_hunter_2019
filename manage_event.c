/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** close_window.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include "fonctions.h"

void manage_event(sfRenderWindow *window, duck_t *duck)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event))
    {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonReleased) {
            recovery_position(window, duck);
        }

    }
}
