#include "shell.h"

/**
 * read_line - reads a line
 *
 * Return: NULL or pointer to string
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	getline(&line, &bufsize, stdin);
	return (line);
}
