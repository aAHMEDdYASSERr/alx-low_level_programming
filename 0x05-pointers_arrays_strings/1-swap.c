#include "main.h"
/**
 * swap_int - that swaps the values of two integers
 * @a: frist pointer integer
 * @b: second pointer integer
 *
 * Return: it will be swap and print the values
 *
*/

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
