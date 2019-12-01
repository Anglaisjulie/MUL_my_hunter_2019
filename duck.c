/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** duck.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include "fonctions.h"
#include <stdlib.h>
#include <time.h>

duck_t *init_duck(void)
{
    duck_t *duck = NULL;
    sfVector2f vector_d;
    sfIntRect rect = {0, 0, 191, 135};

    duck = malloc(sizeof(duck_t));
    duck->texture = sfTexture_createFromFile("dragon.png", NULL);
    duck->sprite = sfSprite_create();
    duck->move.x = rand() % 10;
    duck->move.y = rand() % 10;
    duck->life = 1;
    vector_d.x = 150;
    vector_d.y = 150;
    sfSprite_setTexture(duck->sprite, duck->texture, 1);
    sfSprite_setPosition(duck->sprite, vector_d);
    duck->rect = rect;
    sfSprite_setTextureRect(duck->sprite, duck->rect);
    return (duck);
}

void display_duck (sfRenderWindow *window, duck_t *duck, sfClock *clock)
{
    if (sfClock_getElapsedTime(clock).microseconds / 100010) {
        if (duck->rect.left == 382)
            duck->rect.left = 0;
        else
            duck->rect.left += 191;
        sfSprite_setTextureRect(duck->sprite, duck->rect);
        sfClock_restart(clock);
    }
    if (duck->life == 1)
        sfRenderWindow_drawSprite(window, duck->sprite, NULL);
}

void change_sense (duck_t *duck, int i)
{
    sfVector2f pos_duck = sfSprite_getPosition(duck->sprite);
    sfIntRect rect = {0, 0, 191, 135};

    sfSprite_destroy(duck->sprite);
    sfTexture_destroy(duck->texture);
    if (i == -1) {
        duck->texture = sfTexture_createFromFile("dragonx.png", NULL);
        duck->sprite = sfSprite_create();
        sfSprite_setTexture(duck->sprite, duck->texture, 1);
        sfSprite_setTextureRect(duck->sprite, duck->rect);
    } else {
        duck->texture = sfTexture_createFromFile("dragon.png", NULL);
        duck->sprite = sfSprite_create();
        sfSprite_setTexture(duck->sprite, duck->texture, 1);
        sfSprite_setTextureRect(duck->sprite, duck->rect);
    }
}

void move_duck (duck_t *duck)
{
    sfVector2f position;
    int counter = 1;

    srand(time(NULL));
    position = sfSprite_getPosition(duck->sprite);
    if (position.x <= 0 || position.y <= 0 + 20) {
        counter = 1;
        change_sense(duck, 1);
    }
    if (position.y >= 1080 - 320 || position.x >= 1920 - 291) {
        counter = -1;
        change_sense(duck, -1);
    }
    if (duck->life == 1) {
        duck->move.x = counter * (rand() % 13);
        duck->move.y = counter * (rand() % 13);
        position.x += duck->move.x;
        position.y += duck->move.y;
        sfSprite_setPosition(duck->sprite, position);
    }

}