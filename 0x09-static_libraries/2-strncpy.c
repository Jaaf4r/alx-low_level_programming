#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest:destination
 * @src:source
 * @n:range
 *
 * Return:dest
 *
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
