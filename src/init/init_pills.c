/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** init_pills
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_red_pill(GLOBAL_T *ALL)
{
    S_RED.rect.top = 0;
    S_RED.rect.left = 0;
    S_RED.rect.width = 18;
    S_RED.rect.height = 10;
    S_RED.texture = sfTexture_createFromFile("./Sprites/red_pill.png", NULL);
    S_RED.sprite = sfSprite_create();
    S_RED.scale.x = 3;
    S_RED.scale.y = 3;
    S_RED.offset = 0;
    S_RED.max_value = 36;
    S_RED.move_offset = -55;
    S_RED.pos.x = S_RED.move_offset;
    S_RED.pos.y = rand() % 750;
    S_RED.life = 1;

    sfSprite_setTexture(S_RED.sprite, S_RED.texture, sfFalse);
    sfSprite_setScale(S_RED.sprite, S_RED.scale);
    sfSprite_setPosition(S_RED.sprite, S_RED.pos);
}

void init_blue_pill_2(GLOBAL_T *ALL)
{
    S_BLUE2.rect.top = 0;
    S_BLUE2.rect.left = 18;
    S_BLUE2.rect.width = 18;
    S_BLUE2.rect.height = 10;
    S_BLUE2.texture = sfTexture_createFromFile("./Sprites/blue_pill.png", NULL);
    S_BLUE2.sprite = sfSprite_create();
    S_BLUE2.scale.x = 3;
    S_BLUE2.scale.y = 3;
    S_BLUE2.offset = 0;
    S_BLUE2.max_value = 36;
    S_BLUE2.move_offset = -300;
    S_BLUE2.pos.x = S_BLUE2.move_offset;
    S_BLUE2.pos.y = rand() % 750;
    S_BLUE2.life = 1;

    sfSprite_setTexture(S_BLUE2.sprite, S_BLUE2.texture, sfFalse);
    sfSprite_setScale(S_BLUE2.sprite, S_BLUE2.scale);
    sfSprite_setPosition(S_BLUE2.sprite, S_BLUE2.pos);
}

void init_blue_pill(GLOBAL_T *ALL)
{
    S_BLUE.rect.top = 0;
    S_BLUE.rect.left = 0;
    S_BLUE.rect.width = 18;
    S_BLUE.rect.height = 10;
    S_BLUE.texture = sfTexture_createFromFile("./Sprites/blue_pill.png", NULL);
    S_BLUE.sprite = sfSprite_create();
    S_BLUE.scale.x = 3;
    S_BLUE.scale.y = 3;
    S_BLUE.offset = 0;
    S_BLUE.max_value = 36;
    S_BLUE.move_offset = 1920;
    S_BLUE.pos.x = S_BLUE.move_offset;
    S_BLUE.pos.y = rand() % 750;
    S_BLUE.life = 1;

    sfSprite_setTexture(S_BLUE.sprite, S_BLUE.texture, sfFalse);
    sfSprite_setScale(S_BLUE.sprite, S_BLUE.scale);
    sfSprite_setPosition(S_BLUE.sprite, S_BLUE.pos);
}

void init_red_pill_2(GLOBAL_T *ALL)
{
    S_RED2.rect.top = 0;
    S_RED2.rect.left = 18;
    S_RED2.rect.width = 18;
    S_RED2.rect.height = 10;
    S_RED2.texture = sfTexture_createFromFile("./Sprites/red_pill.png", NULL);
    S_RED2.sprite = sfSprite_create();
    S_RED2.scale.x = 3;
    S_RED2.scale.y = 3;
    S_RED2.offset = 0;
    S_RED2.max_value = 36;
    S_RED2.move_offset = 2220;
    S_RED2.pos.x = S_RED2.move_offset;
    S_RED2.pos.y = rand() % 750;
    S_RED2.life = 1;

    sfSprite_setTexture(S_RED2.sprite, S_RED2.texture, sfFalse);
    sfSprite_setScale(S_RED2.sprite, S_RED2.scale);
    sfSprite_setPosition(S_RED2.sprite, S_RED2.pos);
}

void init_pills_stock(GLOBAL_T *ALL, char *filepath)
{
    PILLS.texture = sfTexture_createFromFile(filepath, NULL);
    PILLS.sprite = sfSprite_create();
    PILLS.scale.x = 3;
    PILLS.scale.y = 3;
    PILLS.pos.x = 1350;
    PILLS.pos.y = 940;

    sfSprite_setTexture(PILLS.sprite, PILLS.texture, sfFalse);
    sfSprite_setScale(PILLS.sprite, PILLS.scale);
    sfSprite_setPosition(PILLS.sprite, PILLS.pos);
}
