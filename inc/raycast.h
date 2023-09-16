#ifndef RAYCAST_H
#define RAYCAST_H

void raycast(game_instance *sdl, player *player, map_t *map,
		SDL_bool *map_active);
SDL_Point check_ray_intersections(SDL_Point *center, double ray_rotation_angle,
		map_t map, double *ray_len, int *orientation);
double remove_fish_eye_effect(player *player, double ray_length,
		double ray_view_angle);
void draw_3D_walls(game_instance *sdl, double ray_length, int ray_index,
		SDL_Color wall_color);

int lines_intersect(line *line1, line *line2, SDL_Point *hitp);
void untextured_floor(game_instance *sdl);
void player_collision_detection(player *player, map_t *map);
int check_intersect_orientation(SDL_Rect wall, SDL_Point *pointA,
		SDL_Point *pointB);


#endif
