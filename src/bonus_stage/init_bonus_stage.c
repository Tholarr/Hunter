/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** init_bonus_stage
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_heart(GLOBAL_T *ALL)
{
    S_HEART.rect.top = 0;
    S_HEART.rect.left = 0;
    S_HEART.rect.width = 13;
    S_HEART.rect.height = 12;
    S_HEART.texture = sfTexture_createFromFile("./Sprites/heart.png", NULL);
    S_HEART.sprite = sfSprite_create();
    S_HEART.scale.x = 7;
    S_HEART.scale.y = 7;
    S_HEART.offset = 0;
    S_HEART.max_value = 117;
    S_HEART.move_offset = -500;
    S_HEART.pos.x = S_HEART.move_offset;
    S_HEART.pos.y = rand() % 750;
    S_HEART.life = 1;

    sfSprite_setTexture(S_HEART.sprite, S_HEART.texture, sfFalse);
    sfSprite_setScale(S_HEART.sprite, S_HEART.scale);
    sfSprite_setPosition(S_HEART.sprite, S_HEART.pos);
}

void init_heart_2(GLOBAL_T *ALL)
{
    S_HEART2.rect.top = 0;
    S_HEART2.rect.left = 0;
    S_HEART2.rect.width = 13;
    S_HEART2.rect.height = 12;
    S_HEART2.texture = sfTexture_createFromFile("./Sprites/heart.png", NULL);
    S_HEART2.sprite = sfSprite_create();
    S_HEART2.scale.x = 7;
    S_HEART2.scale.y = 7;
    S_HEART2.offset = 0;
    S_HEART2.max_value = 117;
    S_HEART2.move_offset = 1920;
    S_HEART2.pos.x = S_HEART2.move_offset;
    S_HEART2.pos.y = rand() % 750;
    S_HEART2.life = 1;

    sfSprite_setTexture(S_HEART2.sprite, S_HEART2.texture, sfFalse);
    sfSprite_setScale(S_HEART2.sprite, S_HEART2.scale);
    sfSprite_setPosition(S_HEART2.sprite, S_HEART2.pos);
}

void init_timer(GLOBAL_T *ALL, char *filepath)
{
    BONUS.timer.texture = sfTexture_createFromFile(filepath, NULL);
    BONUS.timer.sprite = sfSprite_create();
    BONUS.timer.scale.x = 18;
    BONUS.timer.scale.y = 10;
    BONUS.timer.pos.x = 35;
    BONUS.timer.pos.y = 925;

    sfSprite_setTexture(BONUS.timer.sprite, BONUS.timer.texture, sfFalse);
    sfSprite_setScale(BONUS.timer.sprite, BONUS.timer.scale);
    sfSprite_setPosition(BONUS.timer.sprite, BONUS.timer.pos);

}

void init_bonus_stage(GLOBAL_T *ALL)
{
    ALL->pills_stock = 0;
    ALL->time.clock = sfClock_create();
    BONUS.speed = 30;
    BONUS.timer.frame_nb = 0;

    BONUS.bg.texture = sfTexture_createFromFile("./Sprites/bonus_bg.jpg", NULL);
    BONUS.bg.sprite = sfSprite_create();
    BONUS.bg.scale.x = 0.5;
    BONUS.bg.scale.y = 0.5;

    sfSprite_setTexture(BONUS.bg.sprite, BONUS.bg.texture, sfFalse);
    sfSprite_setScale(BONUS.bg.sprite, BONUS.bg.scale);

    init_heart(ALL);
    init_heart_2(ALL);
    init_timer(ALL, "./Sprites/timer01.png");
}
