#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b);
/**
 * malloc_checked -  memory.
 * @b: pointer
 * Return: to allocated memory.
 * fails, value is 98.
 */
void *malloc_checked(unsigned int b)

{

        void *ptr;



        ptr = malloc(b);



        if (ptr == NULL)

                exit(98);



        return (ptr);

}
