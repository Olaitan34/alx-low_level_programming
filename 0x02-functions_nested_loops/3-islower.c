#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * Declaration: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
/*defining function*/
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
