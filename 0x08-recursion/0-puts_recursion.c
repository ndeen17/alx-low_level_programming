#include "main.h"
/**
 * _puts_recursion - function;
 * @s: input 1
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
/*else statement*/

else

_putchar('\n');
}
