#include "main.h"
/**
 *_strlen_recursion - to return lengnth of tge string
 *@s: string of which length is returned
 *Return: lengnth
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
