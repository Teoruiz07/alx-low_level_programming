#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * itrate thru src array
	 * if there is no null byte
	 * in the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 * if the lenth of source is less than n
	 * write additional nullbytes to dest
	 * to ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}