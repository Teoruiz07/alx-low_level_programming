#include <stdio.h>

/**
 * main - print strings of arguments passsed in program
 * @argc: arguments
 * @argv: array that holds cmd arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
		printf("%s\n", argv[t]);
	return (0);
}
