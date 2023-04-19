#include "function_pointers.h"

/**
 * array_iterator - executes a function on elements
 * @array: inputs int array
 * @size: size of the array
 * @action: pointer to the function
 * Return: always return 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
