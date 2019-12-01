/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** background.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include "fonctions.h"
#include <stdlib.h>

void background(sfRenderWindow *window)
{
    sfTexture * background_text;
    sfSprite * background_sprite;

    background_text = sfTexture_createFromFile("back2.jpg", NULL);
    background_sprite = sfSprite_create();
    sfSprite_setTexture(background_sprite, background_text, 1);
    sfRenderWindow_drawSprite(window,  background_sprite, NULL);
}