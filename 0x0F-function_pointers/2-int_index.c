#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the int
 * @size: array
 * @cmp: function
 *
 * Return: int
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;

		}
	return (-1);
}
