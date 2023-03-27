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
	int len;

	len = 0;
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
		len += _print_arg(*format, args);
	}
	else
		len += _putchar(*format);
	format++;
}
	va_end(args);
	return (len);
}

/**
 * _print_arg - handles conversion specifiers for _printf
 * @arg: conversion specifier
 * @args: va_list of arguments for conversion
 * Return: number of characters printed
 */
int _print_arg(char arg, va_list args)
{
	int num, len;

	switch (arg)
		{
			case 'c':
				_putchar(va_arg(args, int));
				return (1);
			case 's':
				len = _put_string(va_arg(args, char *));
				return (len);
			case  'i':
			case  'd':
				num = va_arg(args, int);
				return(_print_number(num));
			default:
				_putchar('%');
				_putchar(arg);
				return (2);
		}
}

