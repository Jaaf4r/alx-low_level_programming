#include <stdio.h>
/**
 * main - write a program that finds and prints the sum of the even-valued terms
 * 
 * Return: Always 0.
 */
int main(void)
{
	int	n1;
	int	n2;
	int	even_fib;
	int	calc_fib;

	n1 = 1;
	n2 = 2;
	even_fib = 2;
	calc_fib = 0;
	while (calc_fib < 4000000)
	{
		calc_fib = n1 + n2;
		n1 = n2;
		n2 = calc_fib;
		if (calc_fib % 2 == 0)
		{
			even_fib += calc_fib;
		}
	}
	printf("%d\n", even_fib);
	return (0);
}
