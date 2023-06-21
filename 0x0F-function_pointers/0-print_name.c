#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - shows a name.
 * @name: name.
 * @f: pointers
 * Return: null.
 */
void print_name(char *name, void (*f)(char *))
{
        if (name && f)
                f(name);
}
