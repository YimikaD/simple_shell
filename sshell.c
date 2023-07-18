#include "sshell.h"

/**
 * ss_shell - This is the Shell entry point
 * @ac: Argument count.
 * @av: Argument vector
 * @env: Environment
 * Return: Status
 */

int ss_shell(int ac, char **av, char **env)
{
        char *prompt = "Frayk$ ";
        char *t = NULL;
        char *input = NULL;

        (void)ac;

        while (1)
        {
                /* Prints prompt */
                if (isatty(STDIN_FILENO))
                        write(1, prompt, 7);
	}
	return (0);
}
