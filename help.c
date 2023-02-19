/*
** EPITECH PROJECT, 2022
** drugs_hunter
** File description:
** help
*/
#include "./include/my.h"
#include "./include/struct.h"
#include "./include/define.h"

void init_help_background(GLOBAL_T *ALL)
{
    BG_GAME.texture = sfTexture_createFromFile("./Sprites/menu_bg.jpg", NULL);
    BG_GAME.sprite = sfSprite_create();
    sfSprite_setTexture(BG_GAME.sprite, BG_GAME.texture, sfFalse);
}

void init_help_text(GLOBAL_T *ALL)
{
    ALL->help.texture = sfTexture_createFromFile("./Sprites/help.png", NULL);
    ALL->help.sprite = sfSprite_create();
    ALL->help.scale.x = 3;
    ALL->help.scale.y = 3;
    ALL->help.pos.x = 50;
    ALL->help.pos.y = 350;

    sfSprite_setTexture(ALL->help.sprite, ALL->help.texture, sfFalse);
    sfSprite_setScale(ALL->help.sprite, ALL->help.scale);
    sfSprite_setPosition(ALL->help.sprite, ALL->help.pos);
}

void help(GLOBAL_T *ALL)
{
    ALL->settings.height_size = 1080;
    ALL->settings.width_size = 1920;
    init_window(ALL);
    init_help_background(ALL);
    init_help_text(ALL);

    while (sfRenderWindow_isOpen(WIN)) {
        sfRenderWindow_display(WIN);
        sfRenderWindow_clear(WIN, sfBlack);

        sfRenderWindow_drawSprite(WIN, BG_GAME.sprite, NULL);
        sfRenderWindow_drawSprite(WIN, ALL->help.sprite, NULL);

        while (sfRenderWindow_pollEvent(WIN, &ALL->settings.event)) {
            if_click_menu(WIN, ALL->settings.event, ALL);
        }
    }
}
