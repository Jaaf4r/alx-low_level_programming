#include "main.h"
/**
 *print_square - prints square using #
 *@size:input
 *Description:# square
 *
 *Return:void
 *
 */
void	print_square(int size)
{
	int	i;
	int	j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == size - 1)
				{
					_putchar(35);
					_putchar('\n');
				}
				else
					_putchar(35);
			}
		}
	}
}
