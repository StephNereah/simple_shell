#include "shell.h"

/**
 * exit_builtin - Implements the exit built-in command
 *
 * Return: Alwyas 0
 */
int exit_builtin(void)
{
	exit(0);
	return (0);
}
