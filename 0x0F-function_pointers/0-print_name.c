#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  pointer to function
 * @name: string to add
 * @f: pointers
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	/*if statement*/

	f(name);
}

