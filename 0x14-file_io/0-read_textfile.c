#include "holberton.h"

/**
 * read_textfiles - reads text files and prints them out
 * @filename: name of file
 * @letters: number of letters to print
 * Return: 0 if fails or number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	if (fd == -1)
		return (0);

	read(fd, buf, letters);

	buf[letters] = '\0';

	write(1, buf, letters);
	close(fd);
	free(buf);
	return (letters);
}
