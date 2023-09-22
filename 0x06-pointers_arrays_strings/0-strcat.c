#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string,
 *			 overwriting the terminating null byte (\0) at the end of dest
 *			, and then adds a terminating null byte
 * @dest: frist pointer
 * @src: second pointer
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;

	while (dest[c])
		c++;

	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];

	return (dest);
}
