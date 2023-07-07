#include "main.h"

/**
 * set_bit - given index to 1
 * @n: pointer to the number to change
 * @index: index pointer
 * iyusuf nurudeen
 * Return: 1 , -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

