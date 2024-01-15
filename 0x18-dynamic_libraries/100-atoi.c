#include "main.h"
/**
 *_atoi - converts a string to an integer
 *
 *@s: string
 *
 *Return:integer 0 - no int
 */
int	_atoi(char *s)
{
	int		i = 0;
	int		sign = 0;
	unsigned int	num = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		if (s[i] == ';')
		{
			break;
		}
		i++;
	}
	if (sign % 2 != 0)
	{
		return (-num);
	}
	return (num);
}
