#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: The input number to check
 * Return: int.
 */
int	_abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
