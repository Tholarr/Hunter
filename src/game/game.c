/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** game
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void pills_move(GLOBAL_T *ALL)
{
    S_RED.move_offset += ALL->speed;
    S_RED.pos.x = S_RED.move_offset;
    sfSprite_setPosition(S_RED.sprite, S_RED.pos);

    S_BLUE.move_offset -= ALL->speed;
    S_BLUE.pos.x = S_BLUE.move_offset;
    sfSprite_setPosition(S_BLUE.sprite, S_BLUE.pos);

    S_RED2.move_offset -= ALL->speed;
    S_RED2.pos.x = S_RED2.move_offset;
    sfSprite_setPosition(S_RED2.sprite, S_RED2.pos);

    S_BLUE2.move_offset += ALL->speed;
    S_BLUE2.pos.x = S_BLUE2.move_offset;
    sfSprite_setPosition(S_BLUE2.sprite, S_BLUE2.pos);
}

void pills_cmp(GLOBAL_T *ALL)
{
    switch (ALL->pills_stock) {
        case 0 : init_pills_stock(ALL, "./Sprites/pill_cmp10.png"); break;
        case 1 : init_pills_stock(ALL, "./Sprites/pill_cmp01.png"); break;
        case 2 : init_pills_stock(ALL, "./Sprites/pill_cmp02.png"); break;
        case 3 : init_pills_stock(ALL, "./Sprites/pill_cmp03.png"); break;
        case 4 : init_pills_stock(ALL, "./Sprites/pill_cmp04.png"); break;
        case 5 : init_pills_stock(ALL, "./Sprites/pill_cmp05.png"); break;
        case 6 : init_pills_stock(ALL, "./Sprites/pill_cmp06.png"); break;
        case 7 : init_pills_stock(ALL, "./Sprites/pill_cmp07.png"); break;
        case 8 : init_pills_stock(ALL, "./Sprites/pill_cmp08.png"); break;
        case 9 : init_pills_stock(ALL, "./Sprites/pill_cmp09.png"); break;
        case 10 : init_pills_stock(ALL, "./Sprites/pill_cmp10.png"); break;
    }
    sfRenderWindow_drawSprite(WIN, PILLS.sprite, NULL);
}

void display(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(WIN, ALL->pictures.game.bg.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, S_GUY.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, GAME.level.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, GAME.level_nb.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, GAME.life.sprite, NULL);

    sfSprite_setTextureRect(S_RED.sprite, S_RED.rect);
    sfRenderWindow_drawSprite(WIN, S_RED.sprite, NULL);

    sfSprite_setTextureRect(S_BLUE.sprite, S_BLUE.rect);
    sfRenderWindow_drawSprite(WIN, S_BLUE.sprite, NULL);

    sfSprite_setTextureRect(S_RED2.sprite, S_RED2.rect);
    sfRenderWindow_drawSprite(WIN, S_RED2.sprite, NULL);

    sfSprite_setTextureRect(S_BLUE2.sprite, S_BLUE2.rect);
    sfRenderWindow_drawSprite(WIN, S_BLUE2.sprite, NULL);

    pills_cmp(ALL);
}

void pill_replay(GLOBAL_T *ALL)
{
    if (S_RED.life == 0 || S_RED.pos.x >= 1920)
        init_red_pill(ALL);

    if (S_BLUE.life == 0 || S_BLUE.pos.x <= 0)
        init_blue_pill(ALL);

    if (S_RED2.life == 0 || S_RED2.pos.x <= 0)
        init_red_pill_2(ALL);

    if (S_BLUE2.life == 0 || S_BLUE2.pos.x >= 1920)
        init_blue_pill_2(ALL);
}

void game(GLOBAL_T *ALL)
{
    ALL->pills_stock = 0;
    init_level(ALL);

    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_display(WIN);
        sfRenderWindow_clear(WIN, sfBlack);

        pill_replay(ALL);

        init_life_pts(ALL);

        display(ALL);

        pills_move(ALL);

        while (sfRenderWindow_pollEvent(WIN, &ALL->settings.event))
            if_click_game(WIN, ALL->settings.event, ALL);
    }
}
