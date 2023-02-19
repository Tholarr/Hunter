/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** menu
*/
#include "../include/my.h"
#include "../include/struct.h"
#include "../include/define.h"

void menu_draw_sprite(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(WIN, ALL->pictures.menu.bg.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, B_PLAY.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, B_TUTO.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, T_TITLE.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, T_CREATOR.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, T_EPITECH.sprite, NULL);
}

void menu(GLOBAL_T *ALL)
{
    ALL->life_pts = 5;

    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_display(WIN);
        sfRenderWindow_clear(WIN, sfBlack);

        menu_draw_sprite(ALL);

        while (sfRenderWindow_pollEvent(WIN, &ALL->settings.event)) {
            if_click_menu(WIN, ALL->settings.event, ALL);
        }
    }
}

int main(int ac, char **av)
{
    GLOBAL_T ALL;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help(&ALL);
    else if (ac != 1 && av[1][0] != '-' && av[1][1] != 'h')
        return 84;
    else {
        init(&ALL);
        menu(&ALL);
    }
    return 0;
}
