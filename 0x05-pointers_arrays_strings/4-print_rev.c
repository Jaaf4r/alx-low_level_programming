#include "main.h"

/*
 * print_rev - prints string
 * @s: input string
 * return: no return
 */

void	print_rev(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
