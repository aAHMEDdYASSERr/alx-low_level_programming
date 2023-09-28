#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: char
 * Return: int
*/


int _strlen_recursion(char *s)
{
	int ntr = 0;
if (*s > '\0')
{
	ntr += _strlen_recursions(s + 1) + 1;
}

return (ntr);
}
