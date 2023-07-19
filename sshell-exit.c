#include "sshell.h"

/**
 * shell_exit - Functiomn to exit
 * @t: Where to execute
 * Return: Nothing
 */
void shell_exit(char **t)
{
	int shell = 0;

	if (t[1] == NULL)
	{
		free_up(t);
		exit(shell);
	}
	else
	{
		shell = atoi(t[1]);
		free(t);
		exit(shell);
	}
}
