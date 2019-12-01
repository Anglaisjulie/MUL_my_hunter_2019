/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** flunk_fire.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Config.h>
#include "fonctions.h"
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int flunk_fire(duck_t *duck)
{
    int flunk = 0;

    if (duck->life == 1) {
        flunk++;
    }
    return (flunk);
}