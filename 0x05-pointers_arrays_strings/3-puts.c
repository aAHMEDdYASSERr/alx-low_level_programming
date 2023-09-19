#include "main.h"
/**
 * _puts: that prints a string, followed by a new
 * @str: the pointer string
 * Return: string of the function
*/


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
