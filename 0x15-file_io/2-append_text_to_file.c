#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opener, writer, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opener = open(filename, O_WRONLY | O_APPEND);
	writer = write(opener, text_content, len);

	if (opener == -1 || writer == -1)
		return (-1);

	close(opener);

	return (1);
}
