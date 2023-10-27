#include <stdio.h>

/**
 * main - prints number of params, followed by a new line
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int	main(int ac, char *av[] __attribute__((unused)))
{
	if (ac > 0)
	{
		printf("%d\n", ac - 1);
	}
	return (0);
}
