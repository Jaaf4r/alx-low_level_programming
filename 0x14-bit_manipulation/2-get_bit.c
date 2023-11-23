#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: parameter
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index @index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = n >> index;
	if (index > sizeof(unsigned int) * 8 - 1)
		return (-1);

	return (bit & 1);
}
