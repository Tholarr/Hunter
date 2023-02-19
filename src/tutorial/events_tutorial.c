/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** events_tutorial
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void tutorial_manage_mouse_click(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= B_MENU.pos.x && mouse.x <= (B_MENU.pos.x + 273)) {
        if (mouse.y >= B_MENU.pos.y && mouse.y <= (B_MENU.pos.y + 140)) {
            B_MENU.rect.left = 39;
            sfSprite_setTextureRect(B_MENU.sprite, B_MENU.rect);
            sfRenderWindow_drawSprite(WIN, B_MENU.sprite, NULL);
            timer();
            B_PLAY.rect.left = 0;
            init_red_pill(ALL);
            menu(ALL);
        }
    }
}

void if_click_tuto(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL)
{
    if (ALL->settings.event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (ALL->settings.event.type == sfEvtMouseButtonPressed)
        tutorial_manage_mouse_click(ALL->settings.event.mouseButton, ALL);
}
