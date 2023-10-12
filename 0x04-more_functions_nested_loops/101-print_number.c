#include "main.h"
/**
 *print_number - prints an integer
 *
 *@n:input
 *
 *Return:void
 *
 *Description:prints an integer
 *
 */
void	print_number(int n)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		_putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
	{
		_putchar(nbr + '0');
	}
	else
	{
		print_number(nbr / 10);
		print_number(nbr % 10);
	}
}
