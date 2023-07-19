#include "sshell.h"

/**
 * ss_shell - This is the Shell entry point
 * @ac: Argument count.
 * @av: Argument value
 * @env: Environment
 * Return: Status
 */

int ss_shell(int ac, char **av, char **env)
{
	char *prompt = "Frayk$ ";
	char **t = NULL;
	char *input = NULL;

	(void)ac;

	while (1)
	{
		/* Prints prompt */
		if (isatty(STDIN_FILENO))
			write(1, prompt, 7);

		input = g_input(av);

		if (input == NULL)
			continue;
		t = total_tokenize(input, av);
		if (t == NULL)
		{
			free(input);
			continue;
		}
		free(input);
		_executeshell(t, av, env);

		free_up(t);
	}
	if (input != NULL)
		free(input);

	if (t != NULL)
		free_up(t);
	return (0);
}
