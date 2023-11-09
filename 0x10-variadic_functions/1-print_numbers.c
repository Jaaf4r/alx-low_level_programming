#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: numbers of ints passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg1;
	unsigned int i;

	va_start(arg1, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(arg1, int), separator);
			}
			else
			{
				printf("%d", va_arg(arg1, int));
			}
		}
		printf("%d", va_arg(arg1, int));
		va_end(arg1);
	}
	printf("\n");
}
