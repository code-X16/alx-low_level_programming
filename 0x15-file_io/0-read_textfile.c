#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);

	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}
	free(b);
	close(o);


	return (w);
}
