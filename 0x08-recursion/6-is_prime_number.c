#include "main.h"
#include <stdio.h>

/**
 * prime_2 - evaluates 1 to n
 * @i: same as n
 * @t: iterates from 1 to n
 * Return: always success
 */

int prime_2(int i, int t)
{
	if (i == t)
		return (1);
	else if (i % t == 0)
		return (0);
	return (prime_2(i, t + 1));
}

/**
 * is_prime_number - checks if number is a prime number
 * @n: number
 * Return: success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_2(n, 2));
}
