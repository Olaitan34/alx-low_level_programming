#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    /* Check if at least one argument is provided (the program name) */
    if (argc >= 1)
    {
        /* Print the program name (argv[0]) */
        printf("%s\n", argv[0]);
    }
    else
    {
        /* Print an error message if there are no arguments */
        printf("No program name provided.\n");
    }

    return (0);
}

