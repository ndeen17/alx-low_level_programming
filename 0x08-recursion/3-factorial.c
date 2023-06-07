#include "main.h"
/**
 * factorial - l of a number
 * @n: number to return m
 *
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

