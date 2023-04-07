#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers passed in the program
 * @argc: no of cmd line arguments
 * @argv: array holding cmd line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, t, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (t = 0; argv[i][t] != '\0'; t++)
		{
			if (!isdigit(argv[i][t]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
