#include "main.h"
/**
 * _strspn - point
 * @s: value
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int r;


	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (p);
		}
		s++;
	}
	return (p);
}

