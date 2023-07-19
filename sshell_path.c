#include "sshell.h"

/**
 * _thepath - Function that gets the path.
 * @t: Token to get
 * @env: Environment
 * Return: 0 if it fails, 1 if successful.
 */
int _thepath(char **t, char **env)
{
	int i;
	char *path = get_env(env, "PATH");
	char *d, *path_cpy;
	char *c;
	struct stat s;

	if (path == NULL)
		return (0);

	i = _strlen(path + 1);

	path_cpy = malloc(i * (sizeof(char)));

	if (path_cpy == NULL)
		return (0);

	_strcpy(path_cpy, path);

	d = strtok(path_cpy, ":");

	while (d != NULL)
	{
		c = malloc(_strlen(d) * _strlen(t[0]) + 2);

		if (!c)
		{
			free(path_cpy);
			return (0);
		}
		_strcpy(c, d);
		_strcat(c, "/ ");
		_strcat(c, t[0]);

		if (stat(c, &s) == 0)
		{
			free(t[0]);
			t[0] = c;
			free(path_cpy);
			return (1);
		} free(c), d = strtok(NULL, ":"); }
	free(path_cpy)
	       	return (0);
}
