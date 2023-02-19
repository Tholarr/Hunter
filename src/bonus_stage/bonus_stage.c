/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** refill_life
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void hearts_move(GLOBAL_T *ALL)
{
    S_HEART.move_offset += BONUS.speed;
    S_HEART.pos.x = S_HEART.move_offset;
    sfSprite_setPosition(S_HEART.sprite, S_HEART.pos);

    S_HEART2.move_offset -= BONUS.speed;
    S_HEART2.pos.x = S_HEART2.move_offset;
    sfSprite_setPosition(S_HEART2.sprite, S_HEART2.pos);
}

void bonus_display(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(WIN, BONUS.bg.sprite, NULL);
    sfRenderWindow_drawSprite(WIN, BONUS.timer.sprite, NULL);

    sfSprite_setTextureRect(S_HEART.sprite, S_HEART.rect);
    sfRenderWindow_drawSprite(WIN, S_HEART.sprite, NULL);

    sfSprite_setTextureRect(S_HEART2.sprite, S_HEART2.rect);
    sfRenderWindow_drawSprite(WIN, S_HEART2.sprite, NULL);
}

void heart_replay(GLOBAL_T *ALL)
{
    if (S_HEART.life == 0 || S_HEART.pos.x >= 1920)
        init_heart(ALL);

    if (S_HEART2.life == 0 || S_HEART2.pos.x <= 0)
        init_heart_2(ALL);
}

void bonus_timer(GLOBAL_T *ALL)
{
    switch (BONUS.timer.frame_nb) {
        case 5 : init_timer(ALL, "./Sprites/timer02.png"); break;
        case 10 :init_timer(ALL, "./Sprites/timer03.png"); break;
        case 15 :init_timer(ALL, "./Sprites/timer04.png"); break;
        case 20 :init_timer(ALL, "./Sprites/timer05.png"); break;
        case 25 :init_timer(ALL, "./Sprites/timer06.png"); break;
        case 30 :init_timer(ALL, "./Sprites/timer07.png"); break;
        case 35 :init_timer(ALL, "./Sprites/timer08.png"); break;
        case 40 :init_timer(ALL, "./Sprites/timer09.png"); break;
        case 45 :init_timer(ALL, "./Sprites/timer10.png"); break;
    }
}

void bonus_stage(GLOBAL_T *ALL)
{
    init_bonus_stage(ALL);
    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_display(WIN);
        sfRenderWindow_clear(WIN, sfBlack);
        heart_replay(ALL);
        bonus_timer(ALL);
        bonus_display(ALL);
        bonus_stage_clock(ALL);
        hearts_move(ALL);
        if (BONUS.timer.frame_nb == 50) {
            ALL->speed += 3;
            init_life_pts(ALL);
            game(ALL);
        }
        while (sfRenderWindow_pollEvent(WIN, &ALL->settings.event))
            if_click_bonus(WIN, ALL->settings.event, ALL);
    }
}
