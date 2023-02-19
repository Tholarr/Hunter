/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_text
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_text_title(GLOBAL_T *ALL)
{
    T_TITLE.rect.top = 0;
    T_TITLE.rect.left = 0;
    T_TITLE.rect.width = 74;
    T_TITLE.rect.height = 9;
    T_TITLE.texture = sfTexture_createFromFile("./Sprites/t_title.png", NULL);
    T_TITLE.sprite = sfSprite_create();
    T_TITLE.scale.x = 16;
    T_TITLE.scale.y = 16;
    T_TITLE.pos.x = 100;
    T_TITLE.pos.y = 120;

    sfSprite_setTexture(T_TITLE.sprite, T_TITLE.texture, sfFalse);
    sfSprite_setScale(T_TITLE.sprite, T_TITLE.scale);
    sfSprite_setPosition(T_TITLE.sprite, T_TITLE.pos);
}

void init_text_creator(GLOBAL_T *ALL)
{
    T_CREATOR.rect.top = 0;
    T_CREATOR.rect.left = 0;
    T_CREATOR.rect.width = 57;
    T_CREATOR.rect.height = 5;
    T_CREATOR.texture = sfTexture_createFromFile("./Sprites/t_autor.png", NULL);
    T_CREATOR.sprite = sfSprite_create();
    T_CREATOR.scale.x = 8;
    T_CREATOR.scale.y = 8;
    T_CREATOR.pos.x = 10;
    T_CREATOR.pos.y = 980;

    sfSprite_setTexture(T_CREATOR.sprite, T_CREATOR.texture, sfFalse);
    sfSprite_setScale(T_CREATOR.sprite, T_CREATOR.scale);
    sfSprite_setPosition(T_CREATOR.sprite, T_CREATOR.pos);
}

void init_text_epitech(GLOBAL_T *ALL)
{
    T_EPITECH.rect.top = 0;
    T_EPITECH.rect.left = 0;
    T_EPITECH.rect.width = 74;
    T_EPITECH.rect.height = 5;
    T_EPITECH.texture = sfTexture_createFromFile("./Sprites/t_epi.png", NULL);
    T_EPITECH.sprite = sfSprite_create();
    T_EPITECH.scale.x = 8;
    T_EPITECH.scale.y = 8;
    T_EPITECH.pos.x = 1320;
    T_EPITECH.pos.y = 980;

    sfSprite_setTexture(T_EPITECH.sprite, T_EPITECH.texture, sfFalse);
    sfSprite_setScale(T_EPITECH.sprite, T_EPITECH.scale);
    sfSprite_setPosition(T_EPITECH.sprite, T_EPITECH.pos);
}

void init_text(GLOBAL_T *ALL)
{
    init_text_title(ALL);
    init_text_creator(ALL);
    init_text_epitech(ALL);
}
