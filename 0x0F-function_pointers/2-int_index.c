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

        if (array && cmp)
        {
                if (size <= 0)
                        return (-1);

                for (p = 0; i < size; p++)
                        if (cmp(array[p]))
                                return (p);
        }

        return (-1);
}
