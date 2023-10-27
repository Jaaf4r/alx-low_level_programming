#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @ac: n args
 * @av: arr args
 * Return: 0
 */

int	main(int ac, char *av[])
{
	unsigned int	i, num, sum;

	sum = 0;
	if (ac < 3)
	{
		printf("0\n");
		return (0);
	}
	while (ac-- && ac > 0)
	{
		for (i = 0; av[ac][i] ; i++)
		{
			if (!(isdigit(av[ac][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(av[ac]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
