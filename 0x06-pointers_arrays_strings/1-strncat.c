#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest:destination
 * @src:source
 * @n:no. of bytes
 *
 * Return:pointer to dest
 */
char	*_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
