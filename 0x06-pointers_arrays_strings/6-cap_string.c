#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s: pointer
 * Return: string whith capitadized word
*/



char *cap_string(char *s)
{
	char *cap_string(char *s)
	int foundd = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundd = 1;
		else if (isLower(*s) && foundd)
		{
			*s -= 32;
			foundd = 0;
		}
		else
			foundd = 0;
		s++;
	}
	return (ptr);
}
