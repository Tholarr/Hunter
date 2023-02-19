/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** game_over
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_end_score_nb1(GLOBAL_T *ALL, char *filepath)
{
    OVER.score_n1.texture = sfTexture_createFromFile(filepath, NULL);
    OVER.score_n1.sprite = sfSprite_create();
    OVER.score_n1.scale.x = 7;
    OVER.score_n1.scale.y = 7;
    OVER.score_n1.pos.x = 450;
    OVER.score_n1.pos.y = 440;

    sfSprite_setTexture(OVER.score_n1.sprite, OVER.score_n1 .texture, sfFalse);
    sfSprite_setScale(OVER.score_n1  .sprite, OVER.score_n1.scale);
    sfSprite_setPosition(OVER.score_n1.sprite, OVER.score_n1.pos);
}

void init_end_score_nb2(GLOBAL_T *ALL, char *filepath)
{
    OVER.score_n2.texture = sfTexture_createFromFile(filepath, NULL);
    OVER.score_n2.sprite = sfSprite_create();
    OVER.score_n2.scale.x = 7;
    OVER.score_n2.scale.y = 7;
    OVER.score_n2.pos.x = 490;
    OVER.score_n2.pos.y = 440;

    sfSprite_setTexture(OVER.score_n2.sprite, OVER.score_n2.texture, sfFalse);
    sfSprite_setScale(OVER.score_n2.sprite, OVER.score_n2.scale);
    sfSprite_setPosition(OVER.score_n2.sprite, OVER.score_n2.pos);
}

void init_end_score_second_part(GLOBAL_T *ALL)
{
    switch (ALL->score) {
        case 0 : init_end_score_nb2(ALL, "./Sprites/0.png"); break;
        case 1 : init_end_score_nb2(ALL, "./Sprites/1.png"); break;
        case 2 : init_end_score_nb2(ALL, "./Sprites/2.png"); break;
        case 3 : init_end_score_nb2(ALL, "./Sprites/3.png"); break;
        case 4 : init_end_score_nb2(ALL, "./Sprites/4.png"); break;
        case 5 : init_end_score_nb2(ALL, "./Sprites/5.png"); break;
        case 6 : init_end_score_nb2(ALL, "./Sprites/6.png"); break;
        case 7 : init_end_score_nb2(ALL, "./Sprites/7.png"); break;
        case 8 : init_end_score_nb2(ALL, "./Sprites/8.png"); break;
        case 9 : init_end_score_nb2(ALL, "./Sprites/9.png"); break;
    }
}

void init_end_score(GLOBAL_T *ALL)
{
    int nb;

    switch (ALL->speed) {
        case 4 : nb = 0; init_end_score_nb1(ALL, "./Sprites/0.png"); break;
        case 7 : nb = 1; init_end_score_nb1(ALL, "./Sprites/1.png"); break;
        case 10 : nb = 2; init_end_score_nb1(ALL, "./Sprites/2.png"); break;
        case 13 : nb = 3; init_end_score_nb1(ALL, "./Sprites/3.png"); break;
        case 16 : nb = 4; init_end_score_nb1(ALL, "./Sprites/4.png"); break;
        case 19 : nb = 5; init_end_score_nb1(ALL, "./Sprites/5.png"); break;
        case 21 : nb = 6; init_end_score_nb1(ALL, "./Sprites/6.png"); break;
        case 23 : nb = 7; init_end_score_nb1(ALL, "./Sprites/7.png"); break;
        case 26 : nb = 8; init_end_score_nb1(ALL, "./Sprites/8.png"); break;
        case 29 : nb = 9; init_end_score_nb1(ALL, "./Sprites/9.png"); break;
    }

    ALL->score -= (nb * 10);

    init_end_score_second_part(ALL);
}

void game_over(GLOBAL_T *ALL)
{
    init_over(ALL);
    init_end_score(ALL);

    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_display(WIN);
        sfRenderWindow_clear(WIN, sfBlack);

        sfRenderWindow_drawSprite(WIN, OVER.bg.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, OVER.score.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, OVER.score_n1.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, OVER.score_n2.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, OVER.t_over.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, OVER.menu_button.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, T_CREATOR.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, T_EPITECH.sprite, NULL);

        while (sfRenderWindow_pollEvent(WIN, &ALL->settings.event))
            if_click_over(WIN, ALL->settings.event, ALL);
    }
}
