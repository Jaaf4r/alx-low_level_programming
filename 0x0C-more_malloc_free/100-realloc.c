#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size of allocated space for ptr.
 * @new_size: new size of the new memory block.
 * Return: pointer
 */

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int	i;
	char *p, *old_arr;

	if (ptr)
	{
		old_arr = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (p);
		}
		for (i = 0; i < old_size; i++)
		{
			p[i] = old_arr[i];
		}
		free(old_arr);
	}
	return (p);
}
