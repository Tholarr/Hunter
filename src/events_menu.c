/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** events
*/
#include "../include/my.h"
#include "../include/struct.h"
#include "../include/define.h"

void click_tutorial(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= B_TUTO.pos.x && mouse.x <= (B_TUTO.pos.x + 396)) {
        if (mouse.y >= B_TUTO.pos.y && mouse.y <= (B_TUTO.pos.y + 180)) {
            B_TUTO.rect.left = 44;
            sfSprite_setTextureRect(B_TUTO.sprite, B_TUTO.rect);
            sfRenderWindow_drawSprite(WIN, B_TUTO.sprite, NULL);
            timer();
            tutorial(ALL);
        }
    }
}

void menu_manage_mouse_click(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= B_PLAY.pos.x && mouse.x <= (B_PLAY.pos.x + 351)) {
        if (mouse.y >= B_PLAY.pos.y && mouse.y <= (B_PLAY.pos.y + 180)) {
            B_PLAY.rect.left = 39;
            sfSprite_setTextureRect(B_PLAY.sprite, B_PLAY.rect);
            sfRenderWindow_drawSprite(WIN, B_PLAY.sprite, NULL);
            timer();
            ALL->speed = 4;
            ALL->score = 0;
            ALL->pictures.game.hit = 0;
            game(ALL);
        }
    }

    click_tutorial(mouse, ALL);
}

void if_click_menu(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL)
{
    if (ALL->settings.event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (ALL->settings.event.type == sfEvtMouseButtonPressed)
        menu_manage_mouse_click(ALL->settings.event.mouseButton, ALL);
}
