#include "stdio.h"
/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */
int main(void)
{
	long	i;
	long	j;
	int	n;
	long	fib;

	i = 0;
	j = 1;
	n = 0;
	while (n < 50)
	{
		fib = i + j;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		i = j;
		j = fib;
		n++;
	}
	return (0);
}
