#include "holberton.h"
int _strlen(char *s);

/**
 * append_text_to_file - creates file with text in file
 * @filename: name of file
 * @text_content: text to be inputted
 * Return: return 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int wERR;

	if (text_content == NULL)
		text_content = "";
	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);

	if (file == -1)
		return (-1);

	wERR = write(file, text_content, _strlen(text_content));
	if (wERR == -1)
		return (-1);
	close(file);
	return (1);
}

/**
 * _strlen - prints the length of a string
 * Description: cycles through the array of s until its false
 * @s: input from file
 * Return: returns the length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}
