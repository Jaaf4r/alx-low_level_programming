#include "main.h"
/**
 * *_strcpy - copies string pointed to by src
 * @dest:destination
 * @src:source
 *
 * Return:pointer to dest
 *
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
