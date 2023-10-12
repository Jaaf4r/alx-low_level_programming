#include "main.h"
/**
 *print_triangle - prints a triangle according to size
 *
 *@size:input
 *
 *Return: void
 *
 */
void	print_triangle(int size)
{
	int	i;
	int	j;
	int	k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= (k - i); k++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
