#include "main.h"
/**
 *print_line - prints a line
 *
 *@n:input
 *
 *Return:void
 */
void print_line(int n)
{
	int	i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			if (i == n)
			{
				_putchar('_');
				_putchar('\n');
			}
			else
				_putchar('_');
			i++;
		}
	}
	else
		_putchar('\n');
}
