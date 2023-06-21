#include "function_pointers.h"

/**
 * array_iterator - its executes a function 
 * @array:input array.
 * @size: The array size
 * @action: pointers
 * Return: null.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        unsigned int p;

        if (array && action)
                for (p = 0; p < size; p++)
                        action(array[p]);
}
