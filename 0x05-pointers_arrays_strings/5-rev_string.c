#include "main.h"

/**
 * rev_string - Function to reverse a string,
 * @s: sting to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int len = 0, i, j;
	char *str, temp;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	str = s;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
