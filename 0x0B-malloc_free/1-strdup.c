#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - newly allocated space in memory.
 * @str: the strings
 * Return: pointer of an array
 */
char *_strdup(char *str)
{
        char *strout;
        unsigned int p, j;

        if (str == NULL)
                return (NULL);

        for (p = 0; str[p] != '\0'; p++)
                ;

        strout = (char *)malloc(sizeof(char) * (p + 1));

        if (strout == NULL)
                return (NULL);

        for (j = 0; j <= p; j++)
                strout[j] = str[j];

        return (strout);
}
