#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: the count of the argument
 * @argv: The string if the argument
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

