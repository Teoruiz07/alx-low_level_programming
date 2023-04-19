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
	int i;
	bool t;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			t = cmp(array[i]);
			if (t == TRUE)
				return (i);
		}
	}

	return (-1);

}
