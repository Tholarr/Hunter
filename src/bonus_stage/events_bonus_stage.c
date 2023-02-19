/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** events_bonus_stage
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void bonus_manage_mouse_click(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= S_HEART.pos.x && mouse.x <= (S_HEART.pos.x + 91)) {
        if (mouse.y >= S_HEART.pos.y && mouse.y <= (S_HEART.pos.y + 84)) {
            S_HEART.life--;
            ALL->life_pts++;
        }
    }
    if (mouse.x >= S_HEART2.pos.x && mouse.x <= (S_HEART2.pos.x + 91)) {
        if (mouse.y >= S_HEART2.pos.y && mouse.y <= (S_HEART2.pos.y + 84)) {
            S_HEART2.life--;
            ALL->life_pts++;
        }
    }
}

void if_click_bonus(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL)
{
    if (ALL->settings.event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (ALL->settings.event.type == sfEvtMouseButtonPressed)
        bonus_manage_mouse_click(ALL->settings.event.mouseButton, ALL);
}
