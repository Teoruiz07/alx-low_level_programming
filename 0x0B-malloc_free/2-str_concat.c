#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, t, e, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (t = 0; s2[t] != '\0'; t++)
		;

	strout = malloc(sizeof(char) * (i + t + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (e = 0; e < i; e++)
		strout[e] = s1[e];

	limit = t;
	for (t = 0; t <= limit; e++, t++)
		strout[e] = s2[t];

	return (strout);
}
