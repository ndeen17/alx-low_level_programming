#include "main.h"
/**
 * _strlen_recursion - string.
 * @s: string
 *
 * Return: The lenght
 */
int _strlen_recursion(char *s)
{
	int ongi  = 0;

	if (*s)
	{
		ongi++;
		ongi += _strlen_recursion(s + 1);
	}

	return (ongi);
}

