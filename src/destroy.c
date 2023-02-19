/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** destroy
*/
#include "../include/my.h"
#include "../include/struct.h"
#include "../include/define.h"

void destroy_sprites_rest(GLOBAL_T *ALL)
{
    sfSprite_destroy(OVER.bg.sprite);
    sfSprite_destroy(BG_GAME.sprite);
    sfSprite_destroy(BG_MENU.sprite);
    sfSprite_destroy(BONUS.bg.sprite);
    sfSprite_destroy(PILLS.sprite);
    sfSprite_destroy(S_RED.sprite);
    sfSprite_destroy(S_RED2.sprite);
    sfSprite_destroy(S_BLUE.sprite);
    sfSprite_destroy(S_BLUE2.sprite);
    sfSprite_destroy(ALL->help.sprite);
    sfSprite_destroy(BONUS.timer.sprite);
    sfSprite_destroy(BONUS.heart.sprite);
    sfSprite_destroy(BONUS.heart_2.sprite);
    sfSprite_destroy(GAME.life.sprite);
    sfSprite_destroy(S_GUY.sprite);
    sfSprite_destroy(B_PLAY.sprite);
    sfSprite_destroy(B_MENU.sprite);
}

void destroy_sprites(GLOBAL_T *ALL)
{
    sfSprite_destroy(T_EPITECH.sprite);
    sfSprite_destroy(T_CREATOR.sprite);
    sfSprite_destroy(T_TITLE.sprite);
    sfSprite_destroy(OVER.score.sprite);
    sfSprite_destroy(OVER.score_n1.sprite);
    sfSprite_destroy(OVER.score_n2.sprite);
    sfSprite_destroy(GAME.level.sprite);
    sfSprite_destroy(GAME.level_nb.sprite);
    destroy_sprites_rest(ALL);
}

void destroy_texture_rest(GLOBAL_T *ALL)
{
    sfTexture_destroy(OVER.bg.texture);
    sfTexture_destroy(BG_GAME.texture);
    sfTexture_destroy(BG_MENU.texture);
    sfTexture_destroy(BONUS.bg.texture);
    sfTexture_destroy(PILLS.texture);
    sfTexture_destroy(S_RED.texture);
    sfTexture_destroy(S_RED2.texture);
    sfTexture_destroy(S_BLUE.texture);
    sfTexture_destroy(S_BLUE2.texture);
    sfTexture_destroy(ALL->help.texture);
    sfTexture_destroy(BONUS.timer.texture);
    sfTexture_destroy(BONUS.heart.texture);
    sfTexture_destroy(BONUS.heart_2.texture);
    sfTexture_destroy(GAME.life.texture);
    sfTexture_destroy(S_GUY.texture);
    sfTexture_destroy(B_PLAY.texture);
    sfTexture_destroy(B_MENU.texture);
}

void destroy_texture(GLOBAL_T *ALL)
{
    sfTexture_destroy(T_EPITECH.texture);
    sfTexture_destroy(T_CREATOR.texture);
    sfTexture_destroy(T_TITLE.texture);
    sfTexture_destroy(OVER.score.texture);
    sfTexture_destroy(OVER.score_n1.texture);
    sfTexture_destroy(OVER.score_n2.texture);
    sfTexture_destroy(GAME.level.texture);
    sfTexture_destroy(GAME.level_nb.texture);
    destroy_texture_rest(ALL);
}

void destroy(GLOBAL_T *ALL)
{
    sfClock_destroy(ALL->time.clock);
    sfMusic_destroy(ALL->music.theme);
    sfMusic_destroy(ALL->music.game_over);
    destroy_sprites(ALL);
    destroy_texture(ALL);
    sfRenderWindow_destroy(WIN);
}
