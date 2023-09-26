#include "main.h"
/**
 * _strpbrk -  function locates the first occurrence in the string s
 *			of any of the bytes in the string accept
 * @s: pointer one
 * @accept: pointer two
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *				, or NULL if no such byte is found
*/


char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
