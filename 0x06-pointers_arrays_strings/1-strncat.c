#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int t, i;

	t = 0;

	/*find size of dest array*/
	while (dest[t])
		t++;

	/**
	 * no need for src to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[t + i] = src[i];
	/*null terminate dest*/
	dest[t + i] = '\0';

	return (dest);
}
