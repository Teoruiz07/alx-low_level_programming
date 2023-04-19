#include "3-calc.h"

/**
 * get_op_func - selects the correct function to carryout
 * the operation asked by user.
 * @s: operator
 * Return: return to the pointer of operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int t = 0;

	while (t < 10)
	{
		if (s[0] == ops->op[t])
			break;
		t++;
	}

	return (ops[i / 2].f);
}
