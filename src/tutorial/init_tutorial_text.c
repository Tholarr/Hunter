/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** init_tutorial_text
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_text_tutorial04(GLOBAL_T *ALL)
{
    TUTO4.texture = sfTexture_createFromFile("./Sprites/t_tuto04.png", NULL);
    TUTO4.sprite = sfSprite_create();
    TUTO4.scale.x = 6;
    TUTO4.scale.y = 6;
    TUTO4.pos.x = 150;
    TUTO4.pos.y = 850;

    sfSprite_setTexture(TUTO4.sprite, TUTO4.texture, sfFalse);
    sfSprite_setScale(TUTO4.sprite, TUTO4.scale);
    sfSprite_setPosition(TUTO4.sprite, TUTO4.pos);
}

void init_text_tutorial03(GLOBAL_T *ALL)
{
    TUTO3.texture = sfTexture_createFromFile("./Sprites/t_tuto03.png", NULL);
    TUTO3.sprite = sfSprite_create();
    TUTO3.scale.x = 4;
    TUTO3.scale.y = 4;
    TUTO3.pos.x = 600;
    TUTO3.pos.y = 550;

    sfSprite_setTexture(TUTO3.sprite, TUTO3.texture, sfFalse);
    sfSprite_setScale(TUTO3.sprite, TUTO3.scale);
    sfSprite_setPosition(TUTO3.sprite, TUTO3.pos);
}

void init_text_tutorial02(GLOBAL_T *ALL)
{
    TUTO2.texture = sfTexture_createFromFile("./Sprites/t_tuto02.png", NULL);
    TUTO2.sprite = sfSprite_create();
    TUTO2.scale.x = 4;
    TUTO2.scale.y = 4;
    TUTO2.pos.x = 600;
    TUTO2.pos.y = 350;

    sfSprite_setTexture(TUTO2.sprite, TUTO2.texture, sfFalse);
    sfSprite_setScale(TUTO2.sprite, TUTO2.scale);
    sfSprite_setPosition(TUTO2.sprite, TUTO2.pos);
}

void init_text_tutorial01(GLOBAL_T *ALL)
{
    TUTO1.texture = sfTexture_createFromFile("./Sprites/t_tuto01.png", NULL);
    TUTO1.sprite = sfSprite_create();
    TUTO1.scale.x = 4;
    TUTO1.scale.y = 4;
    TUTO1.pos.x = 600;
    TUTO1.pos.y = 150;

    sfSprite_setTexture(TUTO1.sprite, TUTO1.texture, sfFalse);
    sfSprite_setScale(TUTO1.sprite, TUTO1.scale);
    sfSprite_setPosition(TUTO1.sprite, TUTO1.pos);
}

void init_tutorial_button_menu(GLOBAL_T *ALL)
{
    B_MENU.rect.top = 0;
    B_MENU.rect.left = 0;
    B_MENU.rect.width = 39;
    B_MENU.rect.height = 20;
    B_MENU.texture = sfTexture_createFromFile("./Sprites/b_menu.png", NULL);
    B_MENU.sprite = sfSprite_create();
    B_MENU.scale.x = 7;
    B_MENU.scale.y = 7;
    B_MENU.pos.x = 1450;
    B_MENU.pos.y = 825;

    sfSprite_setTexture(B_MENU.sprite, B_MENU.texture, sfFalse);
    sfSprite_setScale(B_MENU.sprite, B_MENU.scale);
    sfSprite_setPosition(B_MENU.sprite, B_MENU.pos);
    sfSprite_setTextureRect(B_MENU.sprite, B_MENU.rect);
}
