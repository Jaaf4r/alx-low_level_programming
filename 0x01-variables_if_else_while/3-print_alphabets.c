#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char	aA;

	aA = 'a';
	while (aA <= 'z')
	{
		putchar(aA);
		aA++;
	}
	aA = 'A';
	for (aA = 'A'; aA <= 'Z'; aA++)
		putchar(aA);
	putchar('\n');
	return (0);
}
