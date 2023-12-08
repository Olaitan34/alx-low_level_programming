#include "main.h"

/**
 * append_text_to_file - The function that appends to a file
 * @filename: The name of the file
 * @text_content: The text to append
 * Return: -1 if null.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int a;

	if (filename == NULL)
		return (-1);

	fd = 0;

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}


	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

	write(fd, text_content, a);

	close(fd);

	return (1);
}
