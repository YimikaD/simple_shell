#include "sshell.h"

/**
 * _write - Write text on terminal.
 * @status: Status of message for 0, 1 and 2.
 * @av: NULL terminated string.
 * @text: Message to write.
 * Return: Nothing
 */
void _write(int status, char **av, char *text)
{
	write(status, av[0], _strlen(av[0]));
	write(status, text, _strlen(text));
}

/**
 * _writeerror - Writes out error on terminal
 * @status: Status of message for 0, 1 and 2.
 * @av: NULL terminated string.
 * @c: The failed execution.
 * Return: Nothing.
 */
void _writeerror(int status, char **av, char *c)
{
	write(status, av[0], _strlen(av[0]));
	write(status, ": 1:", 5);
	write(status, c, _strlen(c));
	write(status, " command error\n", _strlen(" command error\n"));
}
