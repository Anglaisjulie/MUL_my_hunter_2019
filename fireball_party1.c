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

fire_t *init_fire1(void)
{
    fire_t *fire1 = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 123, 108};

    fire1 = malloc(sizeof(duck_t));
    fire1->texture = sfTexture_createFromFile("fireball.png", NULL);
    fire1->sprite = sfSprite_create();
    vector_d.x = 760;
    vector_d.y = 900;
    sfSprite_setTexture(fire1->sprite, fire1->texture, 1);
    sfSprite_setPosition(fire1->sprite, vector_d);
    fire1->rect = rect;
    sfSprite_setTextureRect(fire1->sprite, fire1->rect);
    return (fire1);
}

fire_t *init_fire2(void)
{
    fire_t *fire2 = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 123, 108};

    fire2 = malloc(sizeof(duck_t));
    fire2->texture = sfTexture_createFromFile("fireball.png", NULL);
    fire2->sprite = sfSprite_create();
    vector_d.x = 860;
    vector_d.y = 900;
    sfSprite_setTexture(fire2->sprite, fire2->texture, 1);
    sfSprite_setPosition(fire2->sprite, vector_d);
    fire2->rect = rect;
    sfSprite_setTextureRect(fire2->sprite, fire2->rect);
    return (fire2);
}

void display_fire12 (sfRenderWindow *window, duck_t *duck ,
                        fire_t *fire1, fire_t *fire2)
{
    int flunk = manage_event(window, duck);
    if (flunk == 1) {
        sfSprite_destroy(fire1->sprite);
        sfTexture_destroy(fire1->texture);
    }
    if (flunk == 2) {
        sfSprite_destroy(fire2->sprite);
        sfTexture_destroy(fire2->texture);
    }
    sfRenderWindow_drawSprite(window, fire1->sprite, NULL);
    sfRenderWindow_drawSprite(window, fire2->sprite, NULL);
}

