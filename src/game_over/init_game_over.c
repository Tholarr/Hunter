/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** init_game_over
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_over_text(GLOBAL_T *ALL)
{
    OVER.t_over.texture = sfTexture_createFromFile("./Sprites/over.png", NULL);
    OVER.t_over.sprite = sfSprite_create();
    OVER.t_over.scale.x = 15;
    OVER.t_over.scale.y = 15;
    OVER.t_over.pos.x = 175;
    OVER.t_over.pos.y = 250;

    sfSprite_setTexture(OVER.t_over.sprite, OVER.t_over.texture, sfFalse);
    sfSprite_setScale(OVER.t_over.sprite, OVER.t_over.scale);
    sfSprite_setPosition(OVER.t_over.sprite, OVER.t_over.pos);

}

void init_score(GLOBAL_T *ALL)
{
    OVER.score.texture = sfTexture_createFromFile("./Sprites/score.png", NULL);
    OVER.score.sprite = sfSprite_create();
    OVER.score.scale.x = 7;
    OVER.score.scale.y = 7;
    OVER.score.pos.x = 200;
    OVER.score.pos.y = 450;

    sfSprite_setTexture(OVER.score.sprite, OVER.score.texture, sfFalse);
    sfSprite_setScale(OVER.score.sprite, OVER.score.scale);
    sfSprite_setPosition(OVER.score.sprite, OVER.score.pos);

    init_end_score(ALL);

}

void init_over(GLOBAL_T *ALL)
{
    OVER.bg.texture = sfTexture_createFromFile("./Sprites/over_bg.jpg", NULL);
    OVER.bg.sprite = sfSprite_create();

    sfSprite_setTexture(OVER.bg.sprite, OVER.bg.texture, sfFalse);
    sfMusic_play(ALL->music.game_over);

    init_score(ALL);
    init_over_text(ALL);
    init_button_menu(ALL);
    init_text(ALL);
}
