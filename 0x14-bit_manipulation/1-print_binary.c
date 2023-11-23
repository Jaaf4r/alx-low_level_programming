#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int iso;

	for (i = sizeof(unsigned int) * 8 - 1;i >= 0; i--)
	{
		iso = n >> i;
		/**
		 * shifts the bits of n to the right
		 * by 1 position to isolate each bit
		 */
		if (iso & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
