#include "main.h"

/**
 * read_textfile - read a text file and print it to POSIX standard
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: If filename is NULL, the file cannot be opened or read, or
 * write fails or returns an unexpected number of bytes, return 0.
 * Otherwise, return the actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b = NULL;
	ssize_t b_r;
	ssize_t b_wr;
	int fd;

	if (!(filename && letters))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);

	b_r = read(fd, b, letters);
	close(fd);

	if (b_r < 0)
	{
		free(b);
		return (0);
	}
	if (!b_r)
		b_r = letters;

	b_wr = write(STDOUT_FILENO, b, b_r);
	free(b);

	if (b_wr < 0)
		return (0);

	return (b_wr);
}
