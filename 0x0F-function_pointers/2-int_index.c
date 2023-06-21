#include "function_pointers.h"

/**
 * int_index - integer
 * @array: integer array.
 * @size: array.
 * @cmp: pointers
 * Return: first eement 
 * function 0. If no,
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);

}
