/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_entities
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_guy(GLOBAL_T *ALL, char *filepath)
{
    S_GUY.texture = sfTexture_createFromFile(filepath, NULL);
    S_GUY.sprite = sfSprite_create();
    S_GUY.scale.x = 4;
    S_GUY.scale.y = 4;
    S_GUY.pos.x = 1727;
    S_GUY.pos.y = 810;
    S_GUY.frame_nb = 0;

    sfSprite_setTexture(S_GUY.sprite, S_GUY.texture, sfFalse);
    sfSprite_setScale(S_GUY.sprite, S_GUY.scale);
    sfSprite_setPosition(S_GUY.sprite, S_GUY.pos);
}

void init_game(GLOBAL_T *ALL)
{
    BG_GAME.texture = sfTexture_createFromFile("./Sprites/game_bg.jpg", NULL);
    BG_GAME.sprite = sfSprite_create();
    sfSprite_setTexture(BG_GAME.sprite, BG_GAME.texture, sfFalse);

    init_red_pill(ALL);
    init_red_pill_2(ALL);
    init_blue_pill(ALL);
    init_blue_pill_2(ALL);
    init_guy(ALL, "./Sprites/guy01.png");
}
