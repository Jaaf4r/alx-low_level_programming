#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char	*rot13(char *s)
{
	int	i, j;
	char	s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
					&& s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}
	return (s);
}
