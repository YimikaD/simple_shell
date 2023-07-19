#include "sshell.h"

/**
 * free_up - Function that fress
 * @up: Memory to free
 * Return: Void
 */
void free_up(char **up)
{
	int i = 0;

	if (up == NULL)
		return;

	while (up[i] != NULL)
	{
		free(up[i]);
		i++;
	}
	free(up);
}
