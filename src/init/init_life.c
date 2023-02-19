/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** init_life
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_life_sprite(GLOBAL_T *ALL, char *filepath)
{
    GAME.life.texture = sfTexture_createFromFile(filepath, NULL);
    GAME.life.sprite = sfSprite_create();
    GAME.life.scale.x = 4.5;
    GAME.life.scale.y = 4.5;
    GAME.life.pos.x = 700;
    GAME.life.pos.y = 935;

    sfSprite_setTexture(GAME.life.sprite, GAME.life.texture, sfFalse);
    sfSprite_setScale(GAME.life.sprite, GAME.life.scale);
    sfSprite_setPosition(GAME.life.sprite, GAME.life.pos);
}

void init_life_pts(GLOBAL_T *ALL)
{
    switch (ALL->life_pts) {
        case 0 : init_life_sprite(ALL, "./Sprites/pill_cmp00.png"); break;
        case 1 : init_life_sprite(ALL, "./Sprites/pv01.png"); break;
        case 2 : init_life_sprite(ALL, "./Sprites/pv02.png"); break;
        case 3 : init_life_sprite(ALL, "./Sprites/pv03.png"); break;
        case 4 : init_life_sprite(ALL, "./Sprites/pv04.png"); break;
        case 5 : init_life_sprite(ALL, "./Sprites/pv05.png"); break;
    }
}
