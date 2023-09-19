#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse,
 *			 followed by a new line
 * @s: pointer for string
 * Return: value of string
*/


void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
