#include "main.h"
		
/**
 * _isalpha - alphabetic character
 * @c: character
 * Return: 1 , 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

