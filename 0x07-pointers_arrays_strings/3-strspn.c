#include "main.h"
/**
 * _strspn - that gets the length of a prefix substring
 * @s: pointer one
 * @accept: pointer two
 * Return: the number of bytes in the initial segment of s which consist * only of bytes from accept
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
} 
