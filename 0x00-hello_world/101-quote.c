#include <unistd.h>

/**
 * main - calls a command prompt print
 * Description: Prints out end of quote in the prompt
 * Return: End of quote
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
