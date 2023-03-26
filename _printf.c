#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 *  _strlen - output function
 *
 * @s: the input string
 *
 * Description:'Write a function that returns the length of a string.'
 *
 * Return: function has no return values
 */
int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                ++s;
                len++;
        }
        return (len);

}

/**
 *  _put_string - print string
 * Description: prints a string
 * @str: the input string
 *
 * Return: number of string printed
 */

int  _put_string(char *str)
{
        int i = 0;

        while (str[i] != '\0' && str[i] != '\n')
        {
                _putchar(str[i]);
                i++;
        }
        return (i);

}


/**
 * test_edge_cases - test some edge cases
 * Description: ptest some edge cases
 * @format: the input string
 *
 * Return: 1 if there is an edge case 0 otherwise

*/

int test_edge_cases(const char *format)
{
        if (format == NULL || ((format[0] == '%' && !format[1])))
        return (1);
        if ((format[0] == '%' && format[1] == ' ' && !format[2]))
        return (1);

        return (0);
}
/**
 * test_odd_number_of_percentages- test some edge cases
 * Description: if the number of percantages is odd we return -1
 * @format: the input string
 *
 * Return: 1 if there is an edge case 0 otherwise

 */

int test_odd_number_of_percentages(const char *format)
{
        int number_of_percentage = 0;
        int i = 0;

        while (format[i] != '\0')
        {
                if (format[i] == '%')
                {
                        number_of_percentage++;
                }
                i++;
        }
        if (number_of_percentage % 2 == 1)
        {
                return (1);
        }
        return (0);
}
/**
 * _printf - output function
 * Description:''Write a function that produces output according to a format.
 * @format:  is a character string.
 * write output to stdout, the standard output stream
 * Detail. You need to handle the following conversion specifiers:
 *  * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
        va_list args;
        int len = 0;

        va_start(args, format);

        while (*format)
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
				case 'c':
				len += _putchar(va_arg(args, int));
				break;
				case 's':
				len += _put_string(va_arg(args, char *));
				break;
				case '%':
				len += _putchar('%');
				break;
				case  'i':
				intg = va_arg(arg, int);
				len += _print_number(intg);
				break;
				case  'd':
				intg = va_arg(arg, int);
				len += _print_number(intg);
				break;
				default:
				len += _putchar('%');
				len += _putchar(*format);
				break;
			}
                }
                else
                {
                        len += _putchar(*format);
                }
                format++;
        }
        va_end(args);
        return (len);
}
