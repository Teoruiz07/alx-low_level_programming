#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - copies string pointers
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
