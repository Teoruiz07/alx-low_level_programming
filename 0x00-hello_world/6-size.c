#include <stdio.h>

/**
 * main - its the main function
 *
 * Return: always 0
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
