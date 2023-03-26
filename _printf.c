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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
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
	int i, len;
	char *str;

	i = len = 0;
	va_start(arg, format);
	if (format == NULL || ((format[0] == '%' && !format[1])))
	return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(arg, int));
					len++;
				break;
				case  's':
					str = va_arg(arg, char*);
					if (str != NULL && *str != '\0')
						len = len + _put_string(str) - 1;
				break;
				case '%':
					_putchar(37);
					len++;
				break;
			}
			i = i + 2;
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	_putchar(-1);
	va_end(arg);
	return (len);
}
