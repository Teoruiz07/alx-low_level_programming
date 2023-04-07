#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication of
 * 2 values passed to a program
 * @argc: arguments
 * @argv: array holding arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t, v = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (t = 1; t < argc; t++)
	{
		v *= atoi(argv[t]);
	}
	printf("%d\n", v);
	return (0);
}
