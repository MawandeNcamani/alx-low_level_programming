#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - will read a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: In the event that the function fails or filename is NULL then - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bumper;

	if (filename == NULL)
		return (0);

	bumper = malloc(sizeof(char) * letters);
	if (bumper == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bumper, letters);
	w = write(STDOUT_FILENO, bumper, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bumper);
		return (0);
	}

	free(bumper);
	close(o);

	return (w);
}
