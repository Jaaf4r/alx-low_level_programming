#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculates length of a string
 * @s: string
 * Return: int
 */
int	_strlen(char *s)
{
	int	i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * *argstostr - concatenates all arguments of a program.
 * @ac: argument count
 * @av: arguments
 * Return: string
 */
char	*argstostr(int ac, char **av)
{
	int i = 0, sc = 0, j = 0, fsc = 0;
	/* sc : string count ; fsc : full string count */
	char	*s;

	if (ac == 0 || av == 0)
		return (NULL);

	for (; i < ac; i++, sc++)
		sc += _strlen(av[i]);

	s = malloc(sizeof(char) * sc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++, fsc++)
			s[fsc] = av[i][j];

		s[fsc] = '\n';
		fsc++;
	}
	s[fsc] = '\0';

	return (s);
}
