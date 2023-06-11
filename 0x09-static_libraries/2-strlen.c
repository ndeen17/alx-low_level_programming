#include "main.h"
/**
 * _strlen - of  a string
 * @s: dfgr
 * Return: gth
 */
int _strlen(char *s)
{
	int longp = 0;


	while (*s != '\0')
	{
		longp++;
		s++;
	}


	return (longp);
}

