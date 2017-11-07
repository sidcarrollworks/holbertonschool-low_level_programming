#include "holberton.h"

/**
 * read_textfile - reads text files and prints them out
 * @filename: name of file
 * @letters: number of letters to print
 * Return: 0 if fails or number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rErr = 1;
	int wErr = 1;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rErr = read(fd, buf, letters);
	if (rErr == -1)
		return (0);

	buf[letters] = '\0';

	wErr = write(STDOUT_FILENO, buf, rErr);
	if (wErr == -1)
		return (0);
	close(fd);
	free(buf);
	return (letters);
}
