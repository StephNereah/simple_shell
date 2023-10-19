#include "shell.h"

/**
 * _exec - execve dupe implementation
 *
 * @command: Command to execute
 * @cmd: command to run
 * @env: environment variable
 *
 * Return: always 0
 */

int _exec(char *command, char **cmd, char **env)
{
	if (execve(command, cmd, env) == -1)
	{
		perror("Errors:");
	}
	return (0);
}
