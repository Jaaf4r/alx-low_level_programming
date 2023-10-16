#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
