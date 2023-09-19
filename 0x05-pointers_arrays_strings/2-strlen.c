#include "main.h"
/**
 * int _strlen - that returns the length of a string.
 * @s: pointer for address of string
 * Return: the length of a string
 *
*/

int _strlen(char *s)

{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
