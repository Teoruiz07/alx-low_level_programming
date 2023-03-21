#include "main.h"

/**
 * _abs - check for absolute value
 *
 * @b: parameter
 *
 * Return: b
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
