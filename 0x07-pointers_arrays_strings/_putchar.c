#include <unistd.h>


/**
 * _putchar - write the characters c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returnmed, and errno in pet
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
