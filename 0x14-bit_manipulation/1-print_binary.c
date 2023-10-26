#include "main.h"

/**
 * print_binary - function
 * @n: pointer
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8,printer = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar('');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
