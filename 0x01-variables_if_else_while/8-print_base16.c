#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int	main(void)
{
	char	hex;

	hex = '0';
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
