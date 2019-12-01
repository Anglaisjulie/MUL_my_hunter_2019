/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** flags.h
*/

#include <stdarg.h>
#include <stdbool.h>
#include <SFML/Graphics.h>


#ifndef FONCTIONS_H
#define FONCTIONS_H

//
typedef struct duck_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f move;
    bool life;
}duck_t;

typedef struct fire_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
}fire_t;

typedef struct cursor_s {
    sfTexture *text;
    sfSprite *sprite;
}cursor_t;

void background(sfRenderWindow *);
void display_duck (sfRenderWindow *, duck_t *, sfClock *);
void move_duck (duck_t *);
cursor_t *init_cursor(void);
void change_mouse(sfRenderWindow *, cursor_t *);
duck_t *init_duck(void);
int recovery_position (sfRenderWindow *, duck_t *);
int manage_event(sfRenderWindow *, duck_t *);
fire_t *init_fire1(void);
fire_t *init_fire2(void);
fire_t *init_fire3(void);
fire_t *init_fire4(void);
fire_t *init_fire5(void);
void display_fire12 (sfRenderWindow *, duck_t *, fire_t *, fire_t *);
void display_fire34 (sfRenderWindow *, duck_t *, fire_t *, fire_t *);
void display_fire5 (sfRenderWindow *, duck_t *, fire_t *);
void fonctions_duck (sfRenderWindow *, sfClock *, duck_t *);
void fonctions_cursor (sfRenderWindow *, cursor_t *);
int flunk_fire(duck_t *);


#endif