#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
void allocMem(char *str, int _strlen, char *dest);

/**
 * _strlen - get length of a string
 * @str: string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * allocMem - copy string literal to allocated memory
 *
 * @str: string literal
 *
 * @_strlen: @str length
 *
 * @dest: allocated memory
 */

void allocMem(char *str, int _strlen, char *dest)
{
	int i;

	for (i = 0; i < _strlen; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog (Success)
 * NULL if no memory (Failure)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen, ownerLen;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	nameLen = _strlen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	allocMem(name, nameLen, n_dog->name);

	ownerLen = _strlen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	allocMem(owner, ownerLen, n_dog->owner);

	n_dog->age = age;

	return (n_dog);
}
