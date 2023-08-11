#include<stdio.h>

/**
 * main- Entry point
 *
 * Descriotion: This is the C program that printbthe size of various type of computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu by bytes(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));

    return (0);

}
