#include "main.h"
/**
 * print_times_tables - function that prints the n times table, starting with 0.
 * @n: input of table n
 * Return: nothing.
 */
void	print_times_table(int n)
{
	int	row;
	int	col;
	int	mult;

	mult = 0;
	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mult = row * col;
				if (mult < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (col != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
