#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: no. of bytes
 * Return: return a void ptr
 */

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
