#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k1, k2, t, e;
	char *str;

	/*treat NULL as empty*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k1 = k2 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[k1] != '\0')
		k1++;
	while (s2[k2] != '\0')
		k2++;

	/*make n to length of s2*/
	if (n >= k2)
		n = k2;

	str = (char *) malloc((k1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (t = 0; s1[t] != '\0'; t++)
		str[i] = s1[i];
	/*add s2 n bytes to str*/
	for (e = 0; e < n && s2[e] != '\0'; e++)
	{
		str[t] = s2[e];
		t++;
	}
	str[t] = '\0';
	return (str);
}
