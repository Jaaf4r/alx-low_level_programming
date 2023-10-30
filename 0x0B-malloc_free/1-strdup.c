#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char	*_strdup(char *str)
{
	int	i, size;
	char	*dup;

	i = 0;
	size = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] ; size++)
		;
	dup = malloc(size * sizeof(char) + 1);
	if (dup == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			dup[i] = str[i];
	}
	return (dup);
}
