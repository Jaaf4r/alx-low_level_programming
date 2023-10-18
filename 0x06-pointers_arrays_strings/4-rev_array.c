#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: array of integers
 * @n: array length
 * Return: void
 */

void	reverse_array(int *a, int n)
{
	int	i;
	int	swap;

	i = 0;
	while (i < n)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		i++;
		n--;
	}
}
