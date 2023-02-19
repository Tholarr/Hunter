/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** init_tutorial_sprites
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_tutorial_pill(GLOBAL_T *ALL)
{
    S_RED.rect.top = 0;
    S_RED.rect.left = 0;
    S_RED.rect.width = 18;
    S_RED.rect.height = 10;
    S_RED.texture = sfTexture_createFromFile("./Sprites/red_pill.png", NULL);
    S_RED.sprite = sfSprite_create();
    S_RED.scale.x = 5;
    S_RED.scale.y = 5;
    S_RED.pos.x = 150;
    S_RED.pos.y = 150;

    sfSprite_setTexture(S_RED.sprite, S_RED.texture, sfFalse);
    sfSprite_setScale(S_RED.sprite, S_RED.scale);
    sfSprite_setPosition(S_RED.sprite, S_RED.pos);
    sfSprite_setTextureRect(S_RED.sprite, S_RED.rect);
}

void init_tutorial_life(GLOBAL_T *ALL)
{
    GAME.life.texture = sfTexture_createFromFile("./Sprites/pv03.png", NULL);
    GAME.life.sprite = sfSprite_create();
    GAME.life.scale.x = 5;
    GAME.life.scale.y = 5;
    GAME.life.pos.x = 150;
    GAME.life.pos.y = 350;

    sfSprite_setTexture(GAME.life.sprite, GAME.life.texture, sfFalse);
    sfSprite_setScale(GAME.life.sprite, GAME.life.scale);
    sfSprite_setPosition(GAME.life.sprite, GAME.life.pos);
}

void init_tutorial(GLOBAL_T *ALL)
{
    PILLS.texture = sfTexture_createFromFile("./Sprites/pill_cmp05.png", NULL);
    PILLS.sprite = sfSprite_create();
    PILLS.scale.x = 4;
    PILLS.scale.y = 4;
    PILLS.pos.x = 150;
    PILLS.pos.y = 550;

    sfSprite_setTexture(PILLS.sprite, PILLS.texture, sfFalse);
    sfSprite_setScale(PILLS.sprite, PILLS.scale);
    sfSprite_setPosition(PILLS.sprite, PILLS.pos);

    init_tutorial_pill(ALL);
    init_tutorial_life(ALL);
    init_tutorial_button_menu(ALL);
    init_text_tutorial01(ALL);
    init_text_tutorial02(ALL);
    init_text_tutorial03(ALL);
    init_text_tutorial04(ALL);
}
