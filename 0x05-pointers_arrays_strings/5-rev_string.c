#include "main.h"

/**
 * rev_string - rev string
 * @s: string
 */

void	rev_string(char *s)
{
	char	n[1000];
	int	i = 0;

	while (*s)
	{
		n[i] = *s;
		s++;
		i++;
	}
	i = 0;

	while (n[i])
	{
		s--;
		*s = n[i];
		i++;
	}
}
