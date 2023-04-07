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
	char *progname = basename(argv[0]);

	printf("My name is: %s\n", progname);
	return (0);
}

