#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer
 * @c: character
 * Return: a pointer to the first occurrence of the character c in the string s
 * , or NULL if the character is not found
*/


char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
