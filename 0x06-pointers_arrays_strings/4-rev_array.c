#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: frist pointer
 * @n: second pointer
 * Return: nothing
*/


void reverse_array(int *a, int n)
{
	int c, b, t;

	for (c = 0, b = (n - 1); c < b; c++, b--)
	{
		t = c[a];
		c[a] = c[b];
		a[b] = t;
	}
}
