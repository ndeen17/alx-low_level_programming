#include "main.h"

/**
 * get_endianness - checks the machine
 * yusuf nurudeen 
 * Return: 0 , 1 for little
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}

