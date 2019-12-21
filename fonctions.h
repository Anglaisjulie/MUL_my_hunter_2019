/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** flags.h
*/


#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>

static const int MAX_WINDOW_SIZE_X = 1920;
static const int MAX_WINDOW_SIZE_Y = 1080;

typedef struct basic_s{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfVector2f move;
    sfIntRect rect;
    int life;
    int pressed;
} basic_t;

typedef struct game_s {
    basic_t *background;
    basic_t *dragon;
    basic_t *cursor;
    basic_t *menu;
    basic_t *button;
} game_t;

void background(sfRenderWindow *, game_t *);
void manage_event(sfRenderWindow *, game_t *);
basic_t *init_dragon(game_t *, int, int);
void display_dragon(sfRenderWindow *, game_t *, sfClock *);
void dragon_move(game_t *);
basic_t *init_cursor(game_t *);
void change_mouse(sfRenderWindow *, game_t *);
void kill_dragon(sfRenderWindow *, game_t *);
void all_dragon(sfRenderWindow *, sfClock *, game_t *);
void background_menu(sfRenderWindow *, game_t *);
basic_t init_button(game_t *, int, char *, float);
void create_button(game_t *);
void init_display_button(sfRenderWindow *, game_t *, int);
void display_button(sfRenderWindow *, game_t *);
void recovery_position(sfRenderWindow *, game_t *, int);
sfMusic *music_game(void);
void destroy_menu(game_t *);
void destroy_game(game_t *);
void game_loop(sfRenderWindow *, sfClock *, game_t *);

#endif