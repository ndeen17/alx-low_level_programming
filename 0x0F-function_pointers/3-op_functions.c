#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds  numbers.
 * @a: first no.
 * @b: second no
 * Return: no;
 */
int op_add(int a, int b)
{
        return (a + b);
}

/**
 * op_sub - minus numbers.
 * @a: first no
 * @b: second no
 * Return: minus.
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - times two numbers.
 * @a: first no.
 * @b: second no
 * Return: multiply.
 */
int op_mul(int a, int b)
	{
        return (a - b);
}

/**
 * op_mul - times two numbers.
 * @a: first no.
 * @b: second no.
 * Return: multiply
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - divides
 * @a: first no.
 * @b: second no.
 * Return: divide
 */
int op_div(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a / b);
}

/**
 * op_mod - calculates modules
 * @a: first no
 * @b: second no
 * Return: division.
 */
int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a % b);
}
