#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints _putchar
 *
 * Return:Always 0 (success)
**/

int_putchar(char c)
{
        return (write(1, &c, 1));
}
