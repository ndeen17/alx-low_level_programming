#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - positive numbers.
 * @argc: command line arguments.
 * @argv: array 
 * Return: 0
 */
int main(int argc, char *argv[])
{
        int a, b, add = 0;

        for (a = 1; a < argc; a++)
        {
                for (b = 0; argv[a][b] != '\0'; b++)
                {
                        if (!isdigit(argv[a][b]))
                        {
                                printf("Error\n");
                                return (1);
                        }
                }
                add += atoi(argv[a]);
        }
        printf("%d\n", add);
        return (0);
}
