#include "main.h"
#include <stdlib.h>
/**
 * _realloc - it reallocates a memory .
 * @ptr: pointers
 * @old_size: allocated space of pointer
 * @new_size: new size
 * Return: pointer
 * if new_size == old_size, bring pointer.
 * if malloc fails, NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }

        if (ptr == NULL)
                ptr = malloc(new_size);

        if (new_size == old_size)
                return (ptr);

        free(ptr);
        ptr = malloc(new_size);

        return (ptr);
}
