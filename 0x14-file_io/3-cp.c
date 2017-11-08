#include "holberton.h"

/**
 * main - replicates the cp command
 * @argc: number of args
 * @argv: string of chars
 * Return: return -1 if fail and 1 if true
 */
int main(int argc, char **argv)
{
	char buf[1024];
	int files[2];
	ssize_t count;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	files[0] = open(argv[1], O_RDONLY);
	if (files[0] == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	files[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (files[1] == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((count = read(files[0], buf, sizeof(buf))) != 0)
		write(files[1], buf, count);

	return (0);
}
