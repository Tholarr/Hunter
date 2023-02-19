/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** tutorial
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void display_tutorial(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(WIN, ALL->pictures.game.bg.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, PILLS.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, S_RED.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, GAME.life.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, B_MENU.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, TUTO1.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, TUTO2.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, TUTO3.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, TUTO4.sprite, NULL);
}

void tutorial(GLOBAL_T *ALL)
{
    sfMouseButtonEvent mouse;

    init_tutorial(ALL);

    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_display(WIN);
        sfRenderWindow_clear(WIN, sfBlack);

        display_tutorial(ALL);

        while (sfRenderWindow_pollEvent(WIN, &ALL->settings.event))
            if_click_tuto(WIN, ALL->settings.event, ALL);
    }
}
