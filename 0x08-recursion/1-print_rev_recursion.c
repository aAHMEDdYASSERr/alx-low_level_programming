#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: char
 * Return: void
*/


void _print_rev_recursion(char *s)
{
int ntr = 0;
if (*s > '\0')
{
	ntr += _strlen_recursions(s + 1) + 1;
}

return (ntr);
}
