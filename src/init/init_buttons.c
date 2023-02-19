/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_buttons
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_button_tuto(GLOBAL_T *ALL)
{
    B_TUTO.rect.top = 0;
    B_TUTO.rect.left = 0;
    B_TUTO.rect.width = 44;
    B_TUTO.rect.height = 20;
    B_TUTO.texture = sfTexture_createFromFile("./Sprites/b_tuto.png", NULL);
    B_TUTO.sprite = sfSprite_create();
    B_TUTO.scale.x = 9;
    B_TUTO.scale.y = 9;
    B_TUTO.pos.x = 240;
    B_TUTO.pos.y = 650;

    sfSprite_setTexture(B_TUTO.sprite, B_TUTO.texture, sfFalse);
    sfSprite_setScale(B_TUTO.sprite, B_TUTO.scale);
    sfSprite_setPosition(B_TUTO.sprite, B_TUTO.pos);
    sfSprite_setTextureRect(B_TUTO.sprite, B_TUTO.rect);
}

void init_button_play(GLOBAL_T *ALL)
{
    B_PLAY.rect.top = 0;
    B_PLAY.rect.left = 0;
    B_PLAY.rect.width = 39;
    B_PLAY.rect.height = 20;
    B_PLAY.texture = sfTexture_createFromFile("./Sprites/b_play.png", NULL);
    B_PLAY.sprite = sfSprite_create();
    B_PLAY.scale.x = 9;
    B_PLAY.scale.y = 9;
    B_PLAY.pos.x = 240;
    B_PLAY.pos.y = 450;

    sfSprite_setTexture(B_PLAY.sprite, B_PLAY.texture, sfFalse);
    sfSprite_setScale(B_PLAY.sprite, B_PLAY.scale);
    sfSprite_setPosition(B_PLAY.sprite, B_PLAY.pos);
    sfSprite_setTextureRect(B_PLAY.sprite, B_PLAY.rect);
}

void init_button_menu(GLOBAL_T *ALL)
{
    B_MENU.rect.top = 0;
    B_MENU.rect.left = 0;
    B_MENU.rect.width = 39;
    B_MENU.rect.height = 20;
    B_MENU.texture = sfTexture_createFromFile("./Sprites/b_menu.png", NULL);
    B_MENU.sprite = sfSprite_create();
    B_MENU.scale.x = 9;
    B_MENU.scale.y = 9;
    B_MENU.pos.x = 600;
    B_MENU.pos.y = 600;

    sfSprite_setTexture(B_MENU.sprite, B_MENU.texture, sfFalse);
    sfSprite_setScale(B_MENU.sprite, B_MENU.scale);
    sfSprite_setPosition(B_MENU.sprite, B_MENU.pos);
    sfSprite_setTextureRect(B_MENU.sprite, B_MENU.rect);
}
