#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of this function
 *
 * @ac: The number of command-line arguments
 *
 * @av: The command-line arguments
 *
 * Return: 0 if successful
 */

int main(int ac, char *av[])
{
	int n_bytes, i;
	int (*prog)(int, char **) = &main;

	if (ac == 2)
	{
		n_bytes = atoi(av[1]);
		if (n_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < n_bytes; i++)
			printf("%02x%c",
					(unsigned char)*((char *)prog + i), i < n_bytes - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return (0);
}
