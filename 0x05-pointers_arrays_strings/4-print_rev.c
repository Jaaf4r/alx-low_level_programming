#include "main.h"

/**
 * print_rev - prints string
 * @s: input string
 * Return: no return
 */

void	print_rev(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		i++;
		count++;
	}
	while (count > 0)
	{
		i--;
		_putchar(s[i]);
		count--;
	}
	_putchar('\n');
}
