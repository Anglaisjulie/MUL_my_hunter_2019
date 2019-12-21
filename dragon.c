/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** dragon.c
*/

#include "fonctions.h"

basic_t *init_dragon(game_t *game, int x, int y)
{
    sfIntRect rect = {0, 0, 191, 135};

    game->dragon = malloc(sizeof(basic_t));
    game->dragon->texture = sfTexture_createFromFile("dragon.png", NULL);
    game->dragon->sprite = sfSprite_create();
    sfSprite_setTexture(game->dragon->sprite, game->dragon->texture, 1);
    game->dragon->life = 1;
    game->dragon->vector.x = x;
    game->dragon->vector.y = y;
    sfSprite_setPosition(game->dragon->sprite, game->dragon->vector);
    game->dragon->rect = rect;
    sfSprite_setTextureRect(game->dragon->sprite, game->dragon->rect);
    return (game->dragon);
}

void display_dragon(sfRenderWindow *window, game_t *game, sfClock *clock)
{
    if (sfClock_getElapsedTime(clock).microseconds / 100000) {
        if (game->dragon->rect.left == 382)
            game->dragon->rect.left = 0;
        else
            game->dragon->rect.left += 191;
        sfSprite_setTextureRect(game->dragon->sprite, game->dragon->rect);
        sfClock_restart(clock);
    }
    sfRenderWindow_drawSprite(window, game->dragon->sprite, NULL);
}

void dragon_move(game_t *game)
{
    sfVector2f position = sfSprite_getPosition(game->dragon->sprite);
    static int countx = 1;
    static int county = 1;

    if (position.y > 900)
        county = -1;
    if (position.x > 1750)
        countx = -1;
    if (position.y < 0)
        county = 1;
    if (position.x < 0) {
        countx = 1;
    }
    game->dragon->vector.x += 10 * countx;
    game->dragon->vector.y += 2 * county;
    sfSprite_setPosition(game->dragon->sprite, game->dragon->vector);
}

void kill_dragon(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos_mouse;
    sfVector2f pos_duck;
    sfVector2f rec_duck;
    sfClock *clock = sfClock_create();

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_duck = sfSprite_getPosition(game->dragon->sprite);
    rec_duck.x = pos_duck.x + 191;
    rec_duck.y = pos_duck.y + 135;
    if (pos_mouse.x >= pos_duck.x && pos_mouse.x <= rec_duck.x
        && pos_mouse.y >= pos_duck.y && pos_mouse.y <= rec_duck.y) {
        game->dragon->life = 0;
        sfSprite_destroy(game->dragon->sprite);
        sfTexture_destroy(game->dragon->texture);
        all_dragon(window, clock, game);
    }
}

void all_dragon(sfRenderWindow *window, sfClock *clock, game_t *game)
{
    static int a = 0;

    if (a == 0) {
        init_dragon(game, -10, 700);
        display_dragon(window, game, clock);
        a = 1;
    } else if (a == 1) {
        init_dragon(game, 900, -10);
        display_dragon(window, game, clock);
        a = 2;
    } else {
        init_dragon(game, 500, 900);
        display_dragon(window, game, clock);
        a = 0;
    }
}