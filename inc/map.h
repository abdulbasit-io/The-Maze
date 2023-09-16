#ifndef MAP_H
#define MAP_H

map_t file_ops(char *filename);
FILE *open_file(char *filename);
void close_file(FILE *fp);
map_t read_file(FILE *fp);

void free_map(map_t *map);
char *_strcpy(const char *s1, const char *s2);
void validate_line_data(int max_line_count, char *line, FILE *fp,
		int line_number);
int count_rows(FILE *fp);


#endif
