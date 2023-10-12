#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: Always 0.
 */

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
