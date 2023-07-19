#include "sshell.h"

/**
 * check_exit - Program that checks if a command exit and memmory leak
 * @t: A pointer to a pointer of a string
 * @env: Environment
 * Return: 1 on success, 0 on failure
 */
int check_exit(char **t, char **env)
{
	if (_strcmp(t[0], "env", 3) == 0)
	{
		print_environ(env);
		return (1);
	}

	else if (_strcmp(t[0], "exit", 4) == 0)
	{
		shell_exit(t);
		return (1);
	}
	return (0);
}
