#include "main.h"
/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 * @dest: frist pointer
 * @src: second pointer
 * @n: interg
 * Return: a pointer to dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
