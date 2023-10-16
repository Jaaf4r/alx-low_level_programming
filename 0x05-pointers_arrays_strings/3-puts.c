#include "main.h"

/*
 * _puts - prints string
 * @str: input string
 * Return: no return
 */

void	_puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
