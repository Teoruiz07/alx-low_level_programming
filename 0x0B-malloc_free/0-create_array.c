#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of an array
 * @c: stored char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ci;
	unsigned int t;

	if (size == 0)
		return (NULL);

	ci = malloc(sizeof(c) * size);

	if (ci == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		ci[t] = c;

	return (ci);
}
