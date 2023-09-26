#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area 
 * pointed to by s with the constant byte b
 *	Returns a pointer to the memory area s
 * @s: frist pointer
 * @b: character
 * @n: integretor
 * Return: pointer s
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
