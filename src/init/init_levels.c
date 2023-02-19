/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** init_levels
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_level_nb(GLOBAL_T *ALL, char *filepath)
{
    GAME.level_nb.texture = sfTexture_createFromFile(filepath, NULL);
    GAME.level_nb.sprite = sfSprite_create();
    GAME.level_nb.scale.x = 5;
    GAME.level_nb.scale.y = 5;
    GAME.level_nb.pos.x = 200;
    GAME.level_nb.pos.y = 950;

    sfSprite_setTexture(GAME.level_nb.sprite, GAME.level_nb.texture, sfFalse);
    sfSprite_setScale(GAME.level_nb.sprite, GAME.level_nb.scale);
    sfSprite_setPosition(GAME.level_nb.sprite, GAME.level_nb.pos);
}

void choose_level_nb(GLOBAL_T *ALL)
{
    switch (ALL->speed) {
        case 4 : init_level_nb(ALL,"./Sprites/0.png"); break;
        case 7 : init_level_nb(ALL,"./Sprites/1.png"); break;
        case 10 : init_level_nb(ALL,"./Sprites/2.png"); break;
        case 13 : init_level_nb(ALL,"./Sprites/3.png"); break;
        case 16 : init_level_nb(ALL,"./Sprites/4.png"); break;
        case 19 : init_level_nb(ALL,"./Sprites/5.png"); break;
        case 21 : init_level_nb(ALL,"./Sprites/6.png"); break;
        case 23 : init_level_nb(ALL,"./Sprites/7.png"); break;
        case 26 : init_level_nb(ALL,"./Sprites/8.png"); break;
        case 29 : init_level_nb(ALL,"./Sprites/9.png"); break;
    }
}

void init_level(GLOBAL_T *ALL)
{
    GAME.level.texture = sfTexture_createFromFile("./Sprites/t_lvl.png", NULL);
    GAME.level.sprite = sfSprite_create();
    GAME.level.scale.x = 5;
    GAME.level.scale.y = 5;
    GAME.level.pos.x = 50;
    GAME.level.pos.y = 950;

    sfSprite_setTexture(GAME.level.sprite, GAME.level.texture, sfFalse);
    sfSprite_setScale(GAME.level.sprite, GAME.level.scale);
    sfSprite_setPosition(GAME.level.sprite, GAME.level.pos);

    choose_level_nb(ALL);

}
