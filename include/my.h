/*
** EPITECH PROJECT, 2021
** my_header
** File description:
** Biblihotèque contenant tous les prototypes des fonctions
*/

#include "struct.h"
#include "../lib/my/lib.h"

#ifndef MY
    #define MY

scene_t *init_scene(int fire, int mob);
menu_t *init_menu(int btn, int mob, int txt);
game_t *init_game(void);
sfRenderWindow *create_window(void);
background_t *create_bg(char *path, sfIntRect rect);
button_t *create_btn(char *path, sfIntRect rect);
map_t *create_map(char *filepath);
text_t *create_text(char *str, int size, sfVector2f pos);
obj_t *create_fire(game_t *game);
ply_t *create_player(game_t *game);
void set_btn(button_t *btn, sfVector2f pos, sfVector2f scl);
void destroy_all(game_t *game);
void free_mem(game_t *game);
void display(game_t *game);
void display_scene(game_t *game);
void create_scn_one(scene_t *scene, game_t *game);
void create_scene(game_t *game);
void create_menu(game_t *game);

char *get_buffer(char const *filepath);
void get_txtr(map_t *map, char *buf);void get_lvl(map_t *map, char *buf);
void get_size(map_t *map, char *buf);
void get_map(map_t *map, char *buf);

void animate(game_t *game);
void move_rect(obj_t *obj, sfIntRect *rect, int offset, int max_value);
void timer(obj_t *obj, float t, int x, int y);

void analyse_event(game_t *game);
void manage_input_pressed(sfRenderWindow *wndw, sfEvent event, game_t *game);
void manage_input_released(sfRenderWindow *wndw, sfEvent event, game_t *game);

sfVector2f get_pos(map_t *map, char ch, int x_dec, int y_dec);

void move(game_t *game, int move, int i);

void display_menu(game_t *game);

#endif
