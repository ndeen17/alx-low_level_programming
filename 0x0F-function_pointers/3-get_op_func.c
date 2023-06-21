#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - gets a function
 * @s: pointer operator.
 * Return: pointer to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
        op_t ops[] = {
                {"+", op_add},
                {"-", op_sub},
                {"*", op_mul},
                {"/", op_div},
                {"%", op_mod},
                {NULL, NULL}
        };
        int p = 0;

        while (p < 10)
        {
                if (s[0] == ops->op[p])
                        break;
                p++;
        }

        return (ops[p / 2].f);
}
