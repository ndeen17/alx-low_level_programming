#include "main.h"
		
/**
 * char *_strcpy - function
 * @dest: copy 
 * @src: copy 
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int x = 0;


	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; x < k ; x++)
	{
		dest[x] = src[x];
	}
	dest[k] = '\0';
	return (dest);
}

