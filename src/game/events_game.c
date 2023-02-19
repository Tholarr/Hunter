/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** events
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void decadence(GLOBAL_T *ALL)
{
    if (ALL->pills_stock == 0 || ALL->pills_stock == 1 || ALL->pills_stock == 2)
        init_guy(ALL, "./Sprites/guy01.png");
    if (ALL->pills_stock == 3 || ALL->pills_stock == 4 || ALL->pills_stock == 5)
        init_guy(ALL, "./Sprites/guy02.png");
    if (ALL->pills_stock == 6 || ALL->pills_stock == 7)
        init_guy(ALL, "./Sprites/guy03.png");
    if (ALL->pills_stock == 8 || ALL->pills_stock == 9)
        init_guy(ALL, "./Sprites/guy04.png");
}

void game_manage_mouse_click(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    click_red_pill(mouse, ALL);
    click_red_pill_2(mouse, ALL);
    click_blue_pill(mouse, ALL);
    click_blue_pill_2(mouse, ALL);
    if (ALL->pictures.game.hit == 0)
        ALL->life_pts--;
    ALL->pictures.game.hit = 0;
    if (ALL->life_pts == 0)
            game_over(ALL);
}

void if_click_game(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL)
{
    if (ALL->settings.event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (ALL->settings.event.type == sfEvtMouseButtonPressed)
        game_manage_mouse_click(ALL->settings.event.mouseButton, ALL);
}
