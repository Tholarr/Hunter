/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** my_hunter
*/
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct PARAMETER {
        sfVideoMode video_mode;
        sfRenderWindow *window;
        sfEvent event;
        int height_size;
        int width_size;
    } PARAMETER_T;

    typedef struct TIME {
        sfTime time;
        sfClock *clock;
        float seconds;
    } TIME_T;

    typedef struct BACKGROUND {
        sfTexture* texture;
        sfSprite* sprite;
        sfVector2f scale;
    } BACKGROUND_T;

    typedef struct BUTTON {
        sfTexture* texture;
        sfSprite* sprite;
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f pos;
    } BUTTON_T;

    typedef struct MENU {
        BACKGROUND_T bg;
        BUTTON_T play_button;
        BUTTON_T level_button;
        BUTTON_T tutorial_button;
    } MENU_T;
//-----------------------------------//
    typedef struct OBJECT {
        sfTexture* texture;
        sfSprite* sprite;
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f pos;
        int life;
        int move_offset;
        int offset;
        int max_value;
    } OBJECT_T;

    typedef struct GUY {
        sfTexture* texture;
        sfSprite* sprite;
        sfVector2f scale;
        sfVector2f pos;
        int frame_nb;
    } GUY_T;

    typedef struct BONUS {
        BACKGROUND_T bg;
        GUY_T timer;
        OBJECT_T heart;
        OBJECT_T heart_2;
        TIME_T time;
        int speed;
    } BONUS_T;

    typedef struct GAME {
        BACKGROUND_T bg;
        OBJECT_T red_pill;
        OBJECT_T red_pill_2;
        OBJECT_T blue_pill;
        OBJECT_T blue_pill_2;
        GUY_T guy;
        GUY_T pills_stock;
        OBJECT_T level;
        OBJECT_T level_nb;
        OBJECT_T life;
        int hit;

    } GAME_T;

    typedef struct OVER {
        BACKGROUND_T bg;
        OBJECT_T score;
        OBJECT_T score_n1;
        OBJECT_T score_n2;
        OBJECT_T t_over;
        BUTTON_T menu_button;

    } OVER_T;

    typedef struct IMAGE {
        MENU_T menu;
        GAME_T game;
        BONUS_T bonus_stage;
        OVER_T game_over;
    } IMAGE_T;

    typedef struct WRITE {
        sfTexture* texture;
        sfSprite* sprite;
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f pos;
    } WRITE_T;

    typedef struct TEXT {
        WRITE_T game_title;
        WRITE_T creator_name;
        WRITE_T epitech_credit;
        WRITE_T tutorial01;
        WRITE_T tutorial02;
        WRITE_T tutorial03;
        WRITE_T tutorial04;
    } TEXT_T;

    typedef struct HELP {
        sfTexture* texture;
        sfSprite* sprite;
        sfVector2f scale;
        sfVector2f pos;
    } HELP_T;

    typedef struct MUSIC {
        sfMusic* theme;
        sfMusic* game_over;
        sfMusic* collect;
        sfMusic* miss_click;
    } MUSIC_T;

    typedef struct GLOBAL {
        PARAMETER_T settings;
        TIME_T time;
        IMAGE_T pictures;
        TEXT_T text;
        HELP_T help;
        MUSIC_T music;
        int life_pts;
        int pills_stock;
        int speed;
        int score;
    } GLOBAL_T;

#endif /* !STRUCT_H_ */
