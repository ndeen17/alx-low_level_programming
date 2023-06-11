#include "main.h"
/**
 *_memcpy - mory area
 *@dest: red
 *@src: s copied
 *@n: ytes
 *
 *Return: byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int i = n;


	for (; t < i; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}

