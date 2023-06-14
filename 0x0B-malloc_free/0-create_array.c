#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array 
 * @size: array
 * @c: to assign
 * Description: size size and assign char c
 * Return: pointer, NULL 
 *
 */
char *create_array(unsigned int size, char c)
{
        char *str;
        unsigned int p;

        str = malloc(sizeof(char) * size);
        if (size == 0 || str == NULL)
                return (NULL);

        for (p = 0; p < size; p++)
                str[p] = c;
        return (str);
}
