#include "main.h"

/*
 * swap int- main
 * @a: pointer
 */

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
