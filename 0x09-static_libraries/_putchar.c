#include <unistd.h> 
 
/** 
 * _putchar -  c to stdout 
 * @c:o print 
 * 
 * Return: 1. 
 * On error, -1 is riiiiiii, and errno is set appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 

