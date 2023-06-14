#include <stdlib.h>
#include "main.h"

/**
 * count_words - words in a string
 * @str: strings
 * Return: words
 */
int count_words(char *str)
{
        int hag, count, words;

        hag = 0;
        words = 0;

        for (count = 0; str[count] != '\0'; count++)
        {
                if (str[count] == ' ')
                        hag = 0;
                else if (hag == 0)
                {
                        hag = 1;
                        words++;
                }
        }

        return (words);
}

/**
 * strtow - string into words
 * @str: strings
 * Return: pointer, (Error)
 */
char **strtow(char *str)
{
        char **matrix, *temp;
        int i, k = 0, len = 0, words, count = 0, start, end;

        while (*(str + len))
                len++;
        words = count_words(str);
        if (words == 0)
                return (NULL);

        matrix = (char **) malloc(sizeof(char *) * (words + 1));
        if (matrix == NULL)
                return (NULL);

        for (i = 0; i <= len; i++)
        {
                if (str[i] == ' ' || str[i] == '\0')
                {
                        if (count)
                        {
                                end = i;
                                temp = (char *) malloc(sizeof(char) * (count + 1));
                                if (temp == NULL)
                                        return (NULL);
                                while (start < end)
                                        *temp++ = str[start++];
                                *temp = '\0';
                                matrix[k] = temp - count;
                                k++;
                                count = 0;
                        }
                }
                else if (count++ == 0)
                        start = i;
        }
	matrix[k] = NULL;

        return (matrix);
}

