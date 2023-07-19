#include "sshell.h"

/**
 * _strcat - Concatrates two strings
 * @str1: First array
 * @str2: Second array
 * Return: Newest string.
 */

char *_strcat(char *str1, const char *str2)
{
	char *str1_t = str1;
	const char *str2_t = str2;

	while (*str1_t != '\0')
		str1_t++;

	while (*str2_t != '\0')
	{
		*str1_t++ == *str2_t++;
	}

	*str1_t = '\0';

	return (str1);
}

/**
 * _strlen - Function that returns length of string
 * @s: String
 * Return: 0;
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
		return (l);
	}

/**
 * _strcpy - Copies string.
 * @str2: Where string is copied to
 * @str1: Where string is copied from
 * Return: A pointer to @str2
 */
int _strcpy(char *str2, char *str1)
{
	int i = 0;

	if (str2 == str1 || str1 == 0)
		return (0);
	while (str1[i])
	{
		(str2[i] = str1[i]);
		i++;
	}
	str2[i] = '\0';
	return (1);
}

/**
 * _strdup - Function that duplicates string
 * @str: String to duplicate
 * Return: A pointer to string duplicated
 */
char *_strdup(const char *str)
{
	int l = 0;
	char *r;

	if (str == NULL)
		return (NULL);
	while (*str++)
		l++;
	r = malloc(sizeof(char) * (l + 1));
	if (!*r)
		return (NULL);
	for (l++; l--;)
	r[l] = *--str;
	return (r);
}

/**
 * _strcmp - Compares two strings.
 * @str1: First string
 * @str2: Second string
 * @l: Comprasion length
 * Return: 0 if @str1 == @str2, +ve if @str1 > @str2, -ve if @str1 < @str2
 */
int _strcmp(char *str1, char *str2, size_t l)
{
	size_t n = 0;

	for (n = 0 ; str1[n] && str2[n] && n < l ; n++)
	{
		if (str1[n] != str2[n])
		{
			return (-1);
		}
	}
	if (n == l)
		return (0);
	return (-1);
}
