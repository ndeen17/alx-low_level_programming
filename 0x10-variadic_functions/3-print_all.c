#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char -  char.
 * @arg: Arguments
 * nurudeen
 */
void print_char(va_list arg)
{
        char letter;

        letter = va_arg(arg, int);
        printf("%c", letter);
}

/**
 * print_int - an int.
 * @arg: Arguments
 * nurudeen
 */
void print_int(va_list arg)
{
        int num;

        num = va_arg(arg, int);
        printf("%d", num);
}

/**
 * * prin_float - float
 * @arg: Arguments pointing 
 * nurudeen
 */
void print_float(va_list arg)
{
        float num;

        num = va_arg(arg, double);
        printf("%f", num);
}

/**
 * print_string - string.
 * @arg: Arguments 
 * nurudeen
 */
void print_string(va_list arg)
{
        char *str;

        str = va_arg(arg, char *);

        if (str == NULL)
        {
                printf("(nil)");
                return;
        }

        printf("%s", str);
}

/**
 * print_all - Prints, followed by a new line.
 * @format: strings of characters representing the
 *  * @...: Arguments to be printed.
 * nurudeen
 * Description: If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
        va_list args;
        int i = 0, j = 0;
        char *separator = "";
        printer_t funcs[] = {
                {"c", print_char},
                {"i", print_int},
                {"f", print_float},
                {"s", print_string}
        };

        va_start(args, format);

        while (format && (*(format + i)))
        {
                j = 0;

                while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
                        j++;

                if (j < 4)
                {
                        printf("%s", separator);
                        funcs[j].print(args);
                        separator = ", ";
                }

                i++;
        }

        printf("\n");

        va_end(args);
}
