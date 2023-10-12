#include "main.h"
/**
 *print_numbers - print from 0-9 + newline
 *
 *Description:0-9
 *
 *Return:void
 *
 */
void	print_numbers(void)
{
	int	i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
