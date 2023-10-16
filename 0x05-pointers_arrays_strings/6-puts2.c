#include "main.h"

/*
 * puts2 - print one char out of 2
 * @str: type
 *
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
