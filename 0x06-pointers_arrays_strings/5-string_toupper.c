#include "main.h"

/**
 * *string_toupper - upcase a string
 * @str: pointer
 * Return: capitalized string
 */

char	*string_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
