#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest:destination
 * @src:source
 *
 * Return:char
 *
 */
char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
