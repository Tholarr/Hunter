/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** bonus_hearts_move_rect
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void heart_move_rect(GLOBAL_T *ALL)
{
    S_HEART.rect.top = 0;
    S_HEART.rect.left = S_HEART.offset;
    S_HEART.rect.width = 13;
    S_HEART.rect.height = 10;
}

void heart_2_move_rect(GLOBAL_T *ALL)
{
    S_HEART2.rect.top = 0;
    S_HEART2.rect.left = S_HEART2.offset;
    S_HEART2.rect.width = 13;
    S_HEART2.rect.height = 10;
}

void bonus_stage_clock(GLOBAL_T *ALL)
{
    ALL->time.time = sfClock_getElapsedTime(ALL->time.clock);
    ALL->time.seconds = ALL->time.time.microseconds / 1000000.0;
    if (ALL->time.seconds > 0.1) {
        if (S_HEART.offset >= S_HEART.max_value)
            S_HEART.offset = 0;
        if (S_HEART2.offset >= S_HEART2.max_value)
            S_HEART2.offset = 0;
        heart_move_rect(ALL);
        heart_2_move_rect(ALL);
        S_HEART.offset += 13;
        S_HEART2.offset += 13;
        BONUS.timer.frame_nb += 1;
        sfClock_restart(ALL->time.clock);
    }
}
