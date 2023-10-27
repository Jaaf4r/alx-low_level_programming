#include <stdio.h>

/**
 * main - function
 * @ac: offset count
 * @av: offset value
 * Return: 0
 */

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		printf("%s\n", av[ac - 1]);
	}
	return (0);
}
