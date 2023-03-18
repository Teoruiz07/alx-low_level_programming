#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
		if (n != 'q' && n != 'e')
			putchar(n);
	putchar('\n');
	return (0);
}
