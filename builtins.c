#include "shell.h"

/**
 * verif_built_comm - run builtin commands
 *
 * @str: First arg
 * @env: Environment variables
 *
 * Return: 0 or -1 in failure
 */

int verif_built_comm(char *str, char **env)
{
	int it, result;

	built_t built_func[] = {
		{"env", print_env},
		{"exit", _exit_func},
		{NULL, NULL}
	};
	for (it = 0; built_func[it].command != NULL; it++)
	{
		result = _strcmp(str, built_func[it].command);
		if (result == 0)
		{
			built_func[it].f(env);
			return (1);
		}
	}
	return (0);
}
