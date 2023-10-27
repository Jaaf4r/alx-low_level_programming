#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
