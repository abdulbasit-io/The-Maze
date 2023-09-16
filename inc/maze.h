#ifndef MAZE_H
#define MAZE_H


#ifdef LINUX
#include <SDL2/SDL.h>
#include <SDL2/SDL_thread.h>

#elif defined(MAC)
#include <SDL2/SDL_thread.h>
#include <SDL2/SDL.h>
#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_thread.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#include "structures.h"
#include "macros.h"
#include "map.h"
#include "player.h"
#include "raycast.h"
#include "texture.h"

void print_error(void);
void create_window(char *name, game_instance *sdl);
void close_instance(game_instance *sdl);
void create_renderer(game_instance *sdl);

void draw_2d_map(game_instance *sdl, map_t *map);
void send_frame(game_instance *sdl);
void game_event_loop(game_instance *sdl, map_t *map);
void map_events(int *quit, SDL_Event *e, player *player, SDL_Point *mouse,
		SDL_bool *map_active);
SDL_Point rotate_point(const SDL_Point *point, float cx, float cy, float deg,
		float ray_size);

#endif
