#include <stdio.h>


/**
* main - all argument
* @argc: value count
* @argv: value
*
* Return: 0
*/
int main(int argc, char **argv)
{
int t;


for (t = 0; t < argc; t++)
printf("%s\n", argv[t]);


return (0);
}
