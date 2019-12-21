/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** music.c
*/

#include "fonctions.h"

sfMusic *music_game(void)
{
    sfMusic *music_main;

    music_main = sfMusic_createFromFile("music.wav");
    sfMusic_setLoop(music_main, sfTrue);
    sfMusic_play(music_main);

    return (music_main);
}