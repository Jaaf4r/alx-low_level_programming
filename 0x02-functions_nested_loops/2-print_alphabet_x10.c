#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: nothing
 */
void	print_alphabet_x10(void)
{
	int	a;
	int	n;

	n = 0;
	while (n < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		n++;
	}
}
