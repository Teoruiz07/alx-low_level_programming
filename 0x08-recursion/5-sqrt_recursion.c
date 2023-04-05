#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * sqrt_2 - evaluates from 1 to n
 * @i: same integer as n
 * @t: integer from 1 to n
 * Return: value of the root
 */

int sqrt_2(int i, int t)
{
	if (t * t == i)
		return (t);
	else if (t * t > i)
		return (-1);
	return (sqrt_2(i, t + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer
 * Return: return int of the square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_2(n, 1));
}
