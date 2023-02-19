/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init
*/
#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/define.h"

void init_window(GLOBAL_T *ALL)
{
    MODE.bitsPerPixel = 32;
    MODE.height = ALL->settings.height_size;
    MODE.width = ALL->settings.width_size;
    WIN = sfRenderWindow_create(MODE, "drugs_hunter", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(WIN, 60);
}

void init_menu(GLOBAL_T *ALL)
{
    BG_MENU.texture = sfTexture_createFromFile("./Sprites/menu_bg.jpg", NULL);
    BG_MENU.sprite = sfSprite_create();
    sfSprite_setTexture(BG_MENU.sprite, BG_MENU.texture, sfFalse);

    init_button_play(ALL);
    init_button_tuto(ALL);
}

void init_sounds(GLOBAL_T *ALL)
{
    ALL->music.theme = sfMusic_createFromFile("./Sounds/theme.ogg");
    ALL->music.game_over = sfMusic_createFromFile("./Sounds/game_over.ogg");
}

void init(GLOBAL_T *ALL)
{
    ALL->settings.height_size = 1080;
    ALL->settings.width_size = 1920;

    init_sounds(ALL);
    sfMusic_play(ALL->music.theme);

    init_window(ALL);
    init_text(ALL);
    init_menu(ALL);
    init_game(ALL);
}
