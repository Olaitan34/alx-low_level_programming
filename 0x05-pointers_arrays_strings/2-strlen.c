#include "main.h"

/**
 * _strlen - returns the string length.
 * @s: input stringeturn.
 * Return: string length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
