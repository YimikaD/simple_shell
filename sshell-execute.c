#include "sshell.h"

/**
 * _executeshell - Function that executes.
 * @t: File to execute.
 * @av: A null terminator array of strings.
 * @env: Environment variable.
 * Return: 0
 */
void _executeshell(char **t, char **av, char **env)
{
	pid_t ourpid;
	int stat;

	if (t == NULL || t[0] == NULL)
		return;

	if (t[0][0] != '.' && t[0][0] != '/')
	{
		if ((check_exit(t, env)))
			return;

		else if (!_thepath(t, env))
		{
			_writeerror(2, av, t[0]);
			return;
		}
	}

	ourpid = fork();
	if (ourpid == -1)
	{
		_write(2, av, "Process error\n");
		return;
	}
	if (ourpid == 0)
	{
		if (execve(t[0], t, env) == -1)
		{
			_writeerror(2, av, t[0]);
			free_up(t);
			exit(1);
		}
	}

	else
	{
		do {
			waitpid(ourpid, &stat, WUNTRACED);
		}
		while { (!WIFEXITED(stat) && !WIFSIGNALED(stat)); } } }
