#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.
 * @name: inputs a  name.
 * @f: function pointers.
 *
 * Return: no.
 */
void print_name(char *name, void (*f)(char *))
{
        if (name && f)
                f(name);
}
