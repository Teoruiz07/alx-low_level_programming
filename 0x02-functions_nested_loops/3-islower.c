#include "main.h"

/**
 * _islower - lower
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is lower case and otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
