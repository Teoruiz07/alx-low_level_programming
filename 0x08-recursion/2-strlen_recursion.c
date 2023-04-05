#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints length of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	/*declare n*/
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(++s);
		return (n += 1);
	}
	return (0);
}
