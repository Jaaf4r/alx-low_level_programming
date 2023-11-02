#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks digit
 *
 * @s: string to check
 *
 * Return: 1 if digit, 0 if not
 */
int	_isdigit(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		if (*(s + count) > '9' || *(s + count) < '0')
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - prints multiple of to numbers
 *
 * @ac: number of arguments
 * @av: arguments passed
 *
 * Return: 0 on success
 */
int	main(int ac, char *av[])
{
	char num1, num2;
	unsigned int res;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!_isdigit(av[1]) || !_isdigit(av[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
