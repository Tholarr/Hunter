/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** events_game_over
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void timer(void)
{
    for (int i = 0; i < 100000; i++);
}

void game_over_manage_mouse_click(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= B_MENU.pos.x && mouse.x <= (B_MENU.pos.x + 351)) {
        if (mouse.y >= B_MENU.pos.y && mouse.y <= (B_MENU.pos.y + 180)) {
            B_MENU.rect.left = 39;
            sfSprite_setTextureRect(B_MENU.sprite, B_MENU.rect);
            sfRenderWindow_drawSprite(WIN, B_MENU.sprite, NULL);
            timer();
            B_PLAY.rect.left = 0;
            menu(ALL);
        }
    }
}

void if_click_over(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL)
{
    if (ALL->settings.event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (ALL->settings.event.type == sfEvtMouseButtonPressed)
        game_over_manage_mouse_click(ALL->settings.event.mouseButton, ALL);
}
