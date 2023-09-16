#ifndef STRUCT_H
#define STRUCT_H

/**
 * struct game_instance  - sdl global variables
 *
 * @window: SDL window
 * @renderer: SDL renderer
 * @skybox: pointer to skybox texture which creates a the illusion of adistant
 *		background scenery
 *@wall_surface: sdl wall surface
 *@wall_texture: sdl wall texture
 *@weapon: sdl weapon texture
 *
 */
typedef struct game_instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *skybox;
	SDL_Surface *wall_surface;
	SDL_Texture *wall_texture;
	SDL_Texture *weapon;
} game_instance;


/**
 * struct player - data structure to hold player information
 * @rect:  holds player position
 * @view_angle: holds information about player current view angle
 */

typedef struct player
{
	SDL_Rect rect;
	float view_angle;
} player;

/**
 * struct map  - data strcuture for holding map data
 * @arr: array of integers
 * @rows: number of rows in arr
 * @columns: number of columns
 */

typedef struct map
{
	char **arr;
	int rows;
	int columns;
} map_t;

/**
 * struct line - data structure to represent line
 * @p1: start of line, contains it x and y coordinates
 * @p2: end of line, contains its x and y coordinates
 */

typedef struct line
{
	SDL_Point p1;
	SDL_Point p2;
} line;


/**
 * struct thread_data - handles data for multi threading
 * @sdl: sdl_instance
 * @map: map structure
 * @player: player struture
 * @map_active: checks map status
 * @quit: program state int
 */

typedef struct thread_data
{
	game_instance *sdl;
	map_t *map;
	struct player *player;
	SDL_bool *map_active;
	int *quit;
} thread_data;

#endif
