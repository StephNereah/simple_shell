#include "shell.h"

/**
 * _exit_func - Function to exit successfully
 *
 * @environ: Environment variables
 *
 * Return: void
 */

void _exit_func(char **environ)
{
	(void)environ;

	exit(98);
}
