#include "main.h"
/**
  * read_textfile - Read a text file and prints to stdout
  * @filename: pointer to name of file
  * @letters: amount of letters to print out
  * Return: return amount of letters printed in ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t describer, reader, writer;
        char *buffer;

        if (filename == NULL)
                return (0);
        describer = open(filename, O_RDONLY);
        if (describer < 0)
                return (0);
        buffer = malloc(sizeof(char) * (letters + 1));
        reader = read(describer, buffer, letters);
        writer = write(STDOUT_FILENO, buffer, reader);
        if (writer < 0)
                return (0);
        close(describer);
        free(buffer);
        return (writer);
}
