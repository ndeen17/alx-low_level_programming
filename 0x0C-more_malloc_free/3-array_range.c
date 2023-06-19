#include "main.h"
#include <stdlib.h>
/**
 * array_range - makes an array of integers.
 * @min: shows min value.
 * @max: maxim the max value.
 * Return: pointers
 * if man > mix, return NULL.
 * if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
        int *ar;
        int p;

        if (min > max)
                return (NULL);

        ar = malloc(sizeof(*ar) * ((max - min) + 1));

        if (ar == NULL)
                return (NULL);

        for (p = 0; min <= max; p++, min++)
                ar[p] = min;

        return (ar);
}
