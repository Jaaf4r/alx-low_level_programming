#include "main.h"

/**
 * _puts - prints string
 * @s: input string
 * Return: no return
 */

void	_puts(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
