#include "main.h"
/**
 * _memset - ific value
 * @s: memory to be filled
 * @b: value
 * @n: bytes to be changed
 *
 * Return: n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

