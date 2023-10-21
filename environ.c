#include "shell.h"

/**
 * print_environment - prints the environment
 * Return: void
 */
void print_environment(void)
{
	/*extern char **environ;*/

	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}

/**
 * execute_command - runs a comand
 * @data: pointer
 * Return: 0 (success) -1 (failure)
 */
int execute_command(sh_t *data)
{
	if (_strcmp(data->cmd, "env") == 0)
	{
		print_environment();
		return (0);
	}
	else
	{
		return (-1);
	}
}
