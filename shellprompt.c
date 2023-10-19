#include "shell.h"

/**
 * _prompt - write prompt and read commandline
 *
 * @myself: prompt string holder
 * @argv: arguments
 *
 * Return: pointer to command list or NULL
 */

command_t **_prompt(char *myself, char *argv)
{
	command_t *cmd_node = NULL;
	command_t **cmd_list = &cmd_node;
	size_t buff_size = 0;
	ssize_t char_amount = 0;
	char *cmd_line = NULL;

	if (isatty(STDIN_FILENO))
	{
		char_amount = getline(&cmd_line, &buff_size, stdin);
	}
	else
	{
		cmd_line = argv;
	}
	fflush(stdin);

	if (char_amount < 0)
	{
		cmd_list = NULL;
	}
	else
	{
		*cmd_list = _parser_cmd(myself, cmd_line);
		free(cmd_line);
		cmd_line = NULL;
		return (cmd_list);
	}

	return (NULL);
}
