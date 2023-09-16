#include "../inc/maze.h"


/**
 * print_error - prints sdl error
 * Return: nothing
 */

void print_error(void)
{
	printf("SDL failed: %s", SDL_GetError());
}


/**
 * create_window - creates sdl window instance
 * @name: name of the window
 * @sdl: data structure for sdl instance
 * Return: 0 or 1
 */
void create_window(char *name, game_instance *sdl)
{
	sdl->window = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
	if (!sdl->window)
	{
		print_error();
		close_instance(sdl);
		exit(EXIT_FAILURE);
	}
}

/**
 * create_renderer - creates sdl renderer instance
 * @sdl: data structure for sdl instance
 * Return: none
 */
void create_renderer(game_instance *sdl)
{
	sdl->renderer = SDL_CreateRenderer(sdl->window, -1,
			SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
	if (!sdl->renderer)
	{
		print_error();
		close_instance(sdl);
		exit(EXIT_FAILURE);
	}
}



/**
 * close_instance - frees and closes SDL
 * @sdl : structure of sdl instance
 * Return: None
 */
void close_instance(game_instance *sdl)
{
	if (sdl->window)
		SDL_DestroyWindow(sdl->window);
	if (sdl->renderer)
		SDL_DestroyRenderer(sdl->renderer);
	if (sdl->skybox)
		SDL_DestroyTexture(sdl->skybox);
	if (sdl->wall_surface)
		SDL_FreeSurface(sdl->wall_surface);
	if (sdl->wall_texture)
		SDL_DestroyTexture(sdl->wall_texture);
	if (sdl->weapon)
		SDL_DestroyTexture(sdl->weapon);
	sdl->window = NULL;
	sdl->renderer = NULL;
	sdl->skybox = NULL;
	sdl->wall_surface = NULL;
	sdl->wall_texture = NULL;
	SDL_Quit();
}
