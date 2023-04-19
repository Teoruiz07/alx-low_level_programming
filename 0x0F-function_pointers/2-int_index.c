#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to array
 * @size: @array size
 * @cmp: pointer to function call to check index in array
 *       if it matches
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (t = 0; t < size; t++)
			if (cmp(array[t]))
				return (t);
	}

	return (-1);
}
