#include <stdio.h>
#include <libgen.h>

/**
 * main - prints the program's name
 * @argc: arguments supplied to the program
 * @argv: array of pointers to char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

