#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */

char	*create_array(unsigned int size, char c)
{
	char	*arr;

	arr = malloc(size);
	if (size == 0)
	{
		return (0);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
