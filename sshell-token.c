#include "sshell.h"

/**
 * total_tokens - Gets number of tokens.
 * @src: Source to get token from
 * Return: Total number of tokens.
 */

int total_tokens(char *src)
{
	char *delim = " \n";
	char *token;
	int i = 0;

	token = strtok(src, delim);
	while (token != NULL)
	{
		i++;
		token = strtok(NULL, delim);
	}

	return (i);
}


/**
 * total_tokenize - Function to tokenize input into argument.
 * @src: Source to string to tokenize.
 * @av: Argument vector
 * Return: Tokens tokinized
 */

char **total_tokenize(char *src, char **av)
{
	char *src_cpy = NULL;
	char *token;
	char *delim = " \n";
	char **t = NULL;
	int l = 0, i = 0;

	l = strlen(src) + 1;
	src_cpy = malloc(l * sizeof(char));
	if (src_cpy == NULL)
	{
		_write(2, av, "Error");
		return (NULL);
	}

	strcpy(src_cpy, src);
	l = total_tokens(src_cpy);
	free(src_cpy);

	t = malloc((l + 1) * sizeof(char *));
	if (t == NULL)
	{
		_write(2, av, "Error");
		return (NULL);
	}

	token = strtok(src, delim);
	while (token != NULL)
	{
		t[i] = malloc((strlen(token) + 1) * sizeof(char));
		if (t[i] == NULL)
		{
			free_up(t);
			_write(2, av, "Error");
			return (NULL);
		}
		strcpy(t[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	t[l] = NULL, return (t);
}
