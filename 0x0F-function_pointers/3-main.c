#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int ac, char *av[])
{
	int num1, num2;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = atoi(av[1]);
	op = av[2];
	num2 = atoi(av[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
