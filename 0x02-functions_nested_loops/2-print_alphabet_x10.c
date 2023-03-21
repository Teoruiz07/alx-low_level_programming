#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet X10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
