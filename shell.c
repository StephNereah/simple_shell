#include "shell.h"

/**
 * main - Simple Shell
 * @ac: Argument counter.
 * @av: Argument values.
 * @env: Environment variables.
 *
 * Return: 0 or -1 in failure.
 */

int main(int ac, char **av, char **env)
{
	command_t **cmd_list = NULL;
	char *path = NULL;

	path = find_path(env);
	ac++;

	while (1)
	{
		cmd_list = _prompt(av[0], av[1]);
		if (cmd_list)
		{
			if (_fork(av[0], *cmd_list, path, env))
				error_handler(av[0], 102);
		}
		else
			error_handler(av[0], 103);
	}
	return (0);
}
