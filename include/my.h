/*
** EPITECH PROJECT, 2022
** B-MUL-100-NAN-1-1-myhunter-thomas.cluseau
** File description:
** This is my.h for my_hunter project
*/
#include "struct.h"

#ifndef MY_H_
    #define MY_H_

    void help(GLOBAL_T *ALL);
    void if_click_menu(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL);
    void if_click_game(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL);
    void init(GLOBAL_T *ALL);
    void init_button_play(GLOBAL_T *ALL);
    void init_button_tuto(GLOBAL_T *ALL);
    void init_text(GLOBAL_T *ALL);
    void game(GLOBAL_T *ALL);
    void init_game(GLOBAL_T *ALL);
    void tutorial(GLOBAL_T *ALL);
    void init_guy(GLOBAL_T *ALL, char *filepath);
    void game_over(GLOBAL_T *ALL);
    void init_red_pill(GLOBAL_T *ALL);
    void init_red_pill_2(GLOBAL_T *ALL);
    void init_blue_pill(GLOBAL_T *ALL);
    void init_blue_pill_2(GLOBAL_T *ALL);
    void click_red_pill(sfMouseButtonEvent mouse, GLOBAL_T *ALL);
    void click_red_pill_2(sfMouseButtonEvent mouse, GLOBAL_T *ALL);
    void click_blue_pill(sfMouseButtonEvent mouse, GLOBAL_T *ALL);
    void click_blue_pill_2(sfMouseButtonEvent mouse, GLOBAL_T *ALL);
    void bonus_stage(GLOBAL_T *ALL);
    void init_bonus_stage(GLOBAL_T *ALL);
    void if_click_bonus(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL);
    void decadence(GLOBAL_T *ALL);
    void init_window(GLOBAL_T *ALL);
    void init_timer(GLOBAL_T *ALL, char *filepath);
    void init_heart(GLOBAL_T *ALL);
    void init_heart_2(GLOBAL_T *ALL);
    void init_over(GLOBAL_T *ALL);
    void init_button_menu(GLOBAL_T *ALL);
    void if_click_over(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL);
    void menu(GLOBAL_T *ALL);
    void init_pills_stock(GLOBAL_T *ALL, char *filepath);
    void init_end_score(GLOBAL_T *ALL);
    void init_level(GLOBAL_T *ALL);
    void timer(void);
    void init_life_pts(GLOBAL_T *ALL);
    void destroy(GLOBAL_T *ALL);
    void init_tutorial_button_menu(GLOBAL_T *ALL);
    void if_click_tuto(sfRenderWindow *window, sfEvent event, GLOBAL_T *ALL);
    void init_tutorial(GLOBAL_T *ALL);
    void init_text_tutorial01(GLOBAL_T *ALL);
    void init_text_tutorial02(GLOBAL_T *ALL);
    void init_text_tutorial03(GLOBAL_T *ALL);
    void init_text_tutorial04(GLOBAL_T *ALL);
    void bonus_stage_clock(GLOBAL_T *ALL);

#endif /* !MY_H_ */
