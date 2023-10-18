#include "main.h"

/**
 * print_number - print numbers
 * @n: integer
 * Return: 0
 */

void	print_number(int n)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		_putchar(nb + '0');
	}
	else
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
