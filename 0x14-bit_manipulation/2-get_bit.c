#include "main.h"

/**
 * get_bit -  decimal number
 * @n: number pointer
 * @index:bit
 * yusuf nurudeen
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}

