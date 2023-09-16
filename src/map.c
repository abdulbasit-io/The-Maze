#include "../inc/maze.h"

/**
 * free_map - frees map
 * @map: map_t data structure
 * Return: void
 */

void free_map(map_t *map)
{
	int i;

	for (i = 0; i < map->rows; i++)
		free(map->arr[i]);
	free(map->arr);
}


/**
 * _strcpy - concats two strings
 * @s1: first string
 * @s2: second string
 * Return: new string of s1 & s2
 */

char *_strcpy(const char *s1, const char *s2)
{
	char *result = NULL;

	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (!result)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}


/**
 * validate_line_data - chceck for line errorrs in file
 * @max_line_count: max limit to lines length
 * @line: the line to check
 * @fp: file pointer
 * @line_number: current line number
 * Return: void
 */

void validate_line_data(int max_line_count, char *line, FILE *fp,
		int line_number)
{
	const char *valid_chars = "01";
	size_t line_length = strlen(line);
	size_t i;

	if (!line)
		return;
	if (line_length != (size_t)max_line_count)
	{
		free(line);
		close_file(fp);
		printf("Error line No. %d: Columns of map should be equal\n",
				line_number);

		exit(EXIT_FAILURE);
	}

	for (i = 0; i < line_length; i++)
	{
		if (strchr(valid_chars, line[i]) == NULL)
		{
			printf("Error line No. %d: Invalid map values found\n",
					line_number);
			exit(EXIT_FAILURE);
		}
	}
}


/**
 * count_rows - counts the rows in a file
 * @fp: file pointer
 * Return: number of lines in a file
 */

int count_rows(FILE *fp)
{
	char ch;
	int lines = 0;

	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '\n')
		{
			lines++;
		}
	}

	fseek(fp, 0, SEEK_SET);

	return (lines + 1);
}
