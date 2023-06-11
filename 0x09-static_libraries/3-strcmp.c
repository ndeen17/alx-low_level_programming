#include "main.h"
/**
 * _strcmp - string values
 * @s1: value
 * @s2: value
 *
 * Return: s1s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int l;


	l = 0;
	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
	l++;
	}
	return (0);
}

