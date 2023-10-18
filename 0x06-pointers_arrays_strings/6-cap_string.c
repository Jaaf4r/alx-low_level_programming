#include "main.h"

/**
 * *_strlowcase - lowcase all words of a string
 * @str: pointer
 * Return: lowcase string
 */
char	*_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/**
 * *cap_string - capitalize all words of a string
 * @str: pointer
 * Return: capitalized string
 */
char	*cap_string(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
