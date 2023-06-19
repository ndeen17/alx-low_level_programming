#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);
/**
 * _calloc - memory for an array.
 * @nmemb: number of elements.
 * @size: the size of bytes
 * Return: the pointers
 * if nmemb or size 0, return NULL.
 * if malloc fails, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *p;
        unsigned int i;

        if (nmemb == 0 || size == 0)
                return (NULL);
	/*if statement*/

        p = malloc(nmemb * size);

        if (p == NULL)
                return (NULL);

        for (i = 0; i < (nmemb * size); i++)
                p[i] = 0;

        return (p);
}
