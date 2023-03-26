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


int _print_number(int n)
{
    int num_printed = 0;
    unsigned int num_abs = n;

    if (n < 0)
    {
        num_printed += _putchar('-');
        num_abs = -n;
    }

    if (num_abs / 10)
    {
        num_printed += _print_number(num_abs / 10);
    }

    num_printed += _putchar((num_abs % 10) + '0');

    return num_printed;
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
	va_list arg;
	int n, len, intg;
	char *str;

	n = len = 0;
	va_start(arg, format);
	if (format == NULL || ((format[0] == '%' && !format[1])))
	return (-1);
	while (format[n] != '\0' && format[n] != '\n')
	{
		if (format[n] == '%' && format[n + 1])
		{
			switch (format[n + 1])
			{
				case 'c':
					len += _putchar(va_arg(arg, int));
				break;
				case  's':
					str = va_arg(arg, char*);
					if (str != NULL && *str != '\0')
						len += _put_string(str);
				break;
				case '%':
					len += _putchar(37);
				break;
				 case  'i':
                                         intg = va_arg(arg, int);
                                        len += _print_number(intg);
                                break;
				 case  'd':
                                        intg = va_arg(arg, int);
                                        len += _print_number(intg);
                                break;
			}
			n = n + 2;
		}
		else
		{
			_putchar(format[n]);
			len++;
			n++;
		}
	}
	if (format[n] == '\n')
	{len++; }
		_putchar('\n');
	va_end(arg);
	return (len);
}
