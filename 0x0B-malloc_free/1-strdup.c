#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - takes a pointer to a new space in the memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int y, z;

	if (str == NULL)
		return (NULL);

	for (y = 0; str[y] != '\0'; y++)
		;

	strout = (char *)malloc(sizeof(char) * (y + 1));

	if (strout == NULL)
		return (NULL);

	for (z = 0; z <= y; z++)
		strout[z] = str[z];

	return (strout);
}
