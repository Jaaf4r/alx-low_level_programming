#include "main.h"

/**
 * leet - transform to leet
 * @s: char array
 * Return: s transformed
 */

char	*leet(char *s)
{
	int	i, j;
	char	s1[] = "aeotl";
	char	S1[] = "AEOTL";
	char	s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == s1[j] || s[i] == S1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}
	return (s);
}
