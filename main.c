/*
** EPITECH PROJECT, 2019
** Boostrap my_hunter
** File description:
** window.c
*/

#include "fonctions.h"

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {MAX_WINDOW_SIZE_X, MAX_WINDOW_SIZE_Y, 32};
    sfClock *clock = sfClock_create();
    game_t *game = NULL;
    sfMusic *music_main = music_game();

    game = malloc(sizeof(game_t));
    init_cursor(game);
    init_dragon(game, -10, -10);
    create_button(game);
    window = sfRenderWindow_create(mode, "My Hunter", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        game_loop(window, clock, game);
    }
    destroy_menu(game);
    if (game->button->pressed == 0)
        destroy_game(game);
    sfMusic_destroy(music_main);
    sfRenderWindow_destroy(window);
    return (0);
}