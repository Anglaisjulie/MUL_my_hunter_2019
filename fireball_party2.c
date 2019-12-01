/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** fireball_party2.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include "fonctions.h"
#include <stdlib.h>
#include <time.h>

fire_t *init_fire5(void)
{
    fire_t *fire5 = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 123, 108};

    fire5 = malloc(sizeof(duck_t));
    fire5->texture = sfTexture_createFromFile("fireball.png", NULL);
    fire5->sprite = sfSprite_create();
    vector_d.x = 1160;
    vector_d.y = 900;
    sfSprite_setTexture(fire5->sprite, fire5->texture, 1);
    sfSprite_setPosition(fire5->sprite, vector_d);
    fire5->rect = rect;
    sfSprite_setTextureRect(fire5->sprite, fire5->rect);
    return (fire5);
}

fire_t *init_fire3(void)
{
    fire_t *fire3 = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 123, 108};

    fire3 = malloc(sizeof(duck_t));
    fire3->texture = sfTexture_createFromFile("fireball.png", NULL);
    fire3->sprite = sfSprite_create();
    vector_d.x = 960;
    vector_d.y = 900;
    sfSprite_setTexture(fire3->sprite, fire3->texture, 1);
    sfSprite_setPosition(fire3->sprite, vector_d);
    fire3->rect = rect;
    sfSprite_setTextureRect(fire3->sprite, fire3->rect);
    return (fire3);
}

fire_t *init_fire4(void)
{
    fire_t *fire4 = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 123, 108};

    fire4 = malloc(sizeof(duck_t));
    fire4->texture = sfTexture_createFromFile("fireball.png", NULL);
    fire4->sprite = sfSprite_create();
    vector_d.x = 1060;
    vector_d.y = 900;
    sfSprite_setTexture(fire4->sprite, fire4->texture, 1);
    sfSprite_setPosition(fire4->sprite, vector_d);
    fire4->rect = rect;
    sfSprite_setTextureRect(fire4->sprite, fire4->rect);
    return (fire4);
}

void display_fire34 (sfRenderWindow *window, duck_t *duck ,
                        fire_t *fire3, fire_t *fire4)
{
    /*int flunk = recovery_position (window, duck);
    if (flunk == 3) {
        sfSprite_destroy(fire3->sprite);
        sfTexture_destroy(fire3->texture);
    }
    if (flunk == 4) {
        sfSprite_destroy(fire4->sprite);
        sfTexture_destroy(fire4->texture);
    }*/
    sfRenderWindow_drawSprite(window, fire3->sprite, NULL);
    sfRenderWindow_drawSprite(window, fire4->sprite, NULL);
}

void display_fire5 (sfRenderWindow *window, duck_t *duck ,
                        fire_t *fire5)
{
    /*int flunk = recovery_position (window, duck);
    if (flunk == 5) {
        sfSprite_destroy(fire5->sprite);
        sfTexture_destroy(fire5->texture);
    }*/
    sfRenderWindow_drawSprite(window, fire5->sprite, NULL);
}