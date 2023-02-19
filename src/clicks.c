/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** clicks
*/
#include "../include/my.h"
#include "../include/struct.h"
#include "../include/define.h"

void check_for_bonus(GLOBAL_T *ALL)
{
    if (ALL->pills_stock == 10) {
        ALL->pills_stock = 0;
        bonus_stage(ALL);
    }
}

void click_red_pill(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= S_RED.pos.x && mouse.x <= (S_RED.pos.x + 54)) {
        if (mouse.y >= S_RED.pos.y && mouse.y <= (S_RED.pos.y + 30)) {
            S_RED.life--;
            ALL->pills_stock++;
            ALL->score++;
            ALL->pictures.game.hit = 1;
            check_for_bonus(ALL);
            decadence(ALL);
        }
    }
}

void click_red_pill_2(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= S_RED2.pos.x && mouse.x <= (S_RED2.pos.x + 54)) {
        if (mouse.y >= S_RED2.pos.y && mouse.y <= (S_RED2.pos.y + 30)) {
            S_RED2.life--;
            ALL->pills_stock++;
            ALL->score++;
            ALL->pictures.game.hit = 1;
            check_for_bonus(ALL);
            decadence(ALL);
        }
    }
}

void click_blue_pill(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= S_BLUE.pos.x && mouse.x <= (S_BLUE.pos.x + 54)) {
        if (mouse.y >= S_BLUE.pos.y && mouse.y <= (S_BLUE.pos.y + 30)) {
            S_BLUE.life--;
            ALL->pills_stock++;
            ALL->score++;
            ALL->pictures.game.hit = 1;
            check_for_bonus(ALL);
            decadence(ALL);
        }
    }
}

void click_blue_pill_2(sfMouseButtonEvent mouse, GLOBAL_T *ALL)
{
    if (mouse.x >= S_BLUE2.pos.x && mouse.x <= (S_BLUE2.pos.x + 54)) {
        if (mouse.y >= S_BLUE2.pos.y && mouse.y <= (S_BLUE2.pos.y + 30)) {
            S_BLUE2.life--;
            ALL->pills_stock++;
            ALL->score++;
            ALL->pictures.game.hit = 1;
            check_for_bonus(ALL);
            decadence(ALL);
        }
    }
}
