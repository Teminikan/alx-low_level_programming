#include <unistd.h>
/**
 * _putchar writres the character c to stdout
 * @c: The character to print
 * Return: on success 1
 * on error, -1 is returned, and errror is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
