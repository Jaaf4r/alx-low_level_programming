#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: The input character to check
 * Return: int.
 */
int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
