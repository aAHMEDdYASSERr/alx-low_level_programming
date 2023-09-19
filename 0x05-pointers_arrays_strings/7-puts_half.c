#include "main.h"
/**
 * puts_half - that prints half of a string, followed by a new line
 * @str : pointer of sring
 * Return: string
*/


void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
