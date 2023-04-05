#include "main.h"
#include <stdio.h>

/**
 * factorial - prints factorial of a number
 * @n: integer
 * Return: success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
