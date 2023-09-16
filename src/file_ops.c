#include "../inc/maze.h"

/**
 * file_ops - calls of function for file handling
 * @filename: filename
 * Return: map data
 */

map_t file_ops(char *filename)
{
	FILE *fp = NULL;
	map_t map;

	fp = open_file(filename);
	map = read_file(fp);
	close_file(fp);

	return (map);
}



/**
 * open_file - open and reads from a file
 * @filename: name of file
 * Return: file pointer
 */

FILE *open_file(char *filename)
{
	FILE *fp = NULL;

	fp = fopen(filename, "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (fp);
}


/**
 * close_file - close an opened file
 * @fp: file pointer
 * Return: none
 */

void close_file(FILE *fp)
{
	if (fp)
		fclose(fp);
}


/**
 * read_file - reads a file into a map_t data
 * @fp: file pointer
 * Return: map_t data containing map data
 */

map_t read_file(FILE *fp)
{
	size_t line_count = 0;
	char *line = NULL;
	map_t map = {NULL, 0, 0};
	unsigned int line_number = 0, line_length = 0;
	char *dup_line = NULL;

	map.rows = count_rows(fp);
	map.arr = malloc(sizeof(char *) * map.rows);

	while ((getline(&line, &line_count, fp)) != -1)
	{
		dup_line = strtok(strdup(line), "\n");
		if (line_length == 0)
		{
			map.columns = strlen(dup_line);
			line_length++;
		}
		validate_line_data(map.columns, dup_line, fp, (line_number + 1));
		map.arr[line_number] = dup_line;
		line_number++;
	}

	free(line);
	fseek(fp, 0, SEEK_SET);

	return (map);
}
