#include "sshell.h"
#include <string.h>
#include <stdio.h>

/**
 * g_input - Get the  input
 *
 * @av: Argument vector
 *
 * Return: Line read;
 */

char *g_input(char **av)
{
	char *line = NULL;
	size_t l = 0;
	ssize_t r;

	r =  getline(&line, &l, stdin);
	if (r == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(0);
		}
		else
		{
			_write(2, av, " input cannot be read\n");
			free(line);
			return (NULL);
		}
	}

	if (line[r - 1] == '\n')
		line[r - 1] = '\0';

	return (line);
}
