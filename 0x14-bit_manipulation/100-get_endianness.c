#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 * written by apete
 */
int get_endianness(void)
{
	/*char*/
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
