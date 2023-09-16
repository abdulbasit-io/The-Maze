#include "../inc/maze.h"
/**
 * main - entry point into the program
 * @argc: holds the number of inputs passed in the terminal
 * @argv: holds the values of the inputs
 * Return: 0 if succesful
 */

int main(int argc, char **argv)
{
	game_instance sdl = {NULL, NULL, NULL, NULL, NULL, NULL};
	map_t map;
	char *map_path;

	if (argc < 2)
	{
		printf("Usage : %s 'map_path'\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	map_path = _strcpy("maps/", argv[1]);
	map = file_ops(map_path);

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		print_error();
		exit(EXIT_FAILURE);
	}

	create_window(WINDOW_TITLE, &sdl);
	create_renderer(&sdl);

	game_event_loop(&sdl, &map);
	free_map(&map);
	close_instance(&sdl);

	return (0);
}
