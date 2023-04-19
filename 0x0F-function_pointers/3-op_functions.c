#include "3-calc.h"

/**
 * op_add - add numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module of numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
