#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void	main(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
}
