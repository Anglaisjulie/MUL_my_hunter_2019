/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** fireball_party1.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include "fonctions.h"
#include <stdlib.h>
#include <time.h>

fire_t *init_fire(void)
{
    fire_t *fire = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 324, 108};

    fire = malloc(sizeof(fire_t));
    fire->texture = sfTexture_createFromFile("fire.png", NULL);
    fire->sprite = sfSprite_create();
    vector_d.x = 760;
    vector_d.y = 900;
    sfSprite_setTexture(fire->sprite, fire->texture, 1);
    sfSprite_setPosition(fire->sprite, vector_d);
    fire->rect = rect;
    sfSprite_setTextureRect(fire->sprite, fire->rect);
    return (fire);
}

void display_fire(sfRenderWindow *window, duck_t *duck, fire_t *fire)
{
    sfRenderWindow_drawSprite(window, fire->sprite, NULL);
}

