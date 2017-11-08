#include "holberton.h"

/**
 * main - replicates the cp command
 * @argc: number of args
 * @argv: string of chars
 * Return: return -1 if fail and 1 if true
 */
int main(int argc, char *argv[])
{
	char buf[1025];
	int file1;
	int file2;
	int rERR = 1, wERR = 0;
	int closeERR;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IREAD
	| S_IWRITE | S_IRGRP | S_IWGRP | S_IROTH);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (rERR != 0)
	{
		rERR = read(file1, buf, 1024);
		if (rERR == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (rERR != 0)
			wERR = write(file2, buf, rERR);
		if (wERR == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	closeERR = close(file1);
	if (closeERR == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1), exit(100);
	closeERR = close(file2);
	if (closeERR == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2), exit(100);
	return (0);
}
