#ifndef MACROS_H
#define MACROS_H

#define TRUE 1
#define FALSE 0
#define SCREEN_WIDTH 1080
#define SCREEN_HEIGHT 640
#define FOV 60
#define MAP_MARGIN 20
#define PLAYER_WIDTH 20
#define UP_DOWN 1
#define LEFT_RIGHT 2
#define GRID_SIZE 16
#define WINDOW_TITLE "The Maze. Is there a way out?"
#define RADIAN(x) (x * (M_PI / 180.0))
#define ROTATION_MAGNITUDE 1
#define MOVE_SPEED 2
#define MAX_DRAW_DISTANCE 1024


#define REND_WHITE(x) SDL_SetRenderDrawColor(x, 255, 255, 255, 255)
#define REND_BLACK(x) SDL_SetRenderDrawColor(x, 0, 0, 0, 255)
#define REND_YELLOW(x) SDL_SetRenderDrawColor(x, 255, 255, 0, 255)
#define REND_GREEN(x) SDL_SetRenderDrawColor(x, 0, 255, 0, 255)
#define REND_BLUE(x) SDL_SetRenderDrawColor(x, 0, 0, 255, 255)
#define REND_COLOR(x, r, g, b, a) SDL_SetRenderDrawColor(x, r, g, b, a)

#endif
