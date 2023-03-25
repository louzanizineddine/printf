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
 * _printf - output function
 *
 * @format:  is a character string.
 * The format string is composed of zero or more directives.
 *
 * Description:''Write a function that produces output according to a format.
 * write output to stdout, the standard output stream
 * Detail. You need to handle the following conversion specifiers:
 * c
 * s
 * %
 * You don’t have to reproduce the buffer handling of the C library printf function
 * You don’t have to handle the flag characters
 * You don’t have to handle field width
 * You don’t have to handle precision
 * You don’t have to handle the length modifiers
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char * const format, ...)
{
	va_list arg;
	int i /* , len, strlen*/ ;
	char *str;

	i = 0;
	va_start(arg, format);
	while (format == NULL)
	{
		printf("\n");
		return 0;
	}
	while (format[i])
	{
		_putchar(format[i]);

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
				_putchar(va_arg(arg, int));
				break;
				case  's':
				str = va_arg(arg, char*);
				if (str == NULL || *str == '\0')
				{printf("(nill)");
					break; }
				printf("%s", str);
				break;
				case  'i':
				printf("%i", va_arg(arg, int));
				break;
				case 'f':
				printf("%f", va_arg(arg, double));
				break;
			}
		}
		i++;
	}
	va_end(arg);
	printf("\n");
	return 0;
}
