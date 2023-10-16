#include <stdio.h>
/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */
int main(void)
{
	int	mult;
	int	res;

	mult = 0;
	res = 0;
	while (mult < 1024)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
			res += mult;
		mult++;
	}
	printf("%d\n", res);
	return (0);
}
