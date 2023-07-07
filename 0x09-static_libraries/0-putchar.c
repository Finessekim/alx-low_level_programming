#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: the char to print
 *
 * Return: 1 (success)
 * On error, -1 is returned and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
