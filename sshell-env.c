#include "sshell.h"

/**
 * get_env - Function that gets the environment
 * @env: Environment
 * @data: Data to search about
 * Return: NULL
 */
char *get_env(char **env, char *data)
{
	int i = 0;
	int len = _strlen(data);

	for (i = 0; env[i]; i++)
	{
		if (_strcmp(env[i], data, len) == 0)
			return (env[i]);
	}
	return (NULL);
}

/**
 * print_environ - Prints the environment
 * @env: Environment to print
 * Return: Nothing
 */
void print_environ(char **env)
{
	char **envp = env;

	while (*envp)
	{
		write(1, *envp, _strlen(*envp));
		write(1, "\n", 1);
		envp++;
	}
}
