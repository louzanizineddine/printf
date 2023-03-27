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
 *  print_rev - output function
 *
 * @s: the input string
 *
 * Description:'Write a function that print string follow new line.'
 *
 * Return: function has no return values
 */
int print_rev(char *s)
{
	int string_len, i;

	string_len = _strlen(s);
	i = 0;
	/* char	reverse; */
	while (string_len)
	{
		/* reverse = s + string_len; */
		--string_len;
		_putchar(s[string_len]);
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
	unsigned int unum;
	int num, len;
	void *ptr;
	unsigned long int addr;

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
				return (_print_number(num));
			case 'b':
				len = _print_binary(va_arg(args, unsigned int));
				return (len);
			case 'u':
				unum = va_arg(args, unsigned int);
				return (_print_unsigned(unum));
			case 'o':
				unum = va_arg(args, unsigned int);
				return (_print_octal(unum));
			case 'x':
				unum = va_arg(args, unsigned int);
				return (_print_hex(unum, 0));

			case 'X':
				unum = va_arg(args, unsigned int);
				return (_print_hex(unum, 1));
			case 'p':
				ptr = va_arg(args, void *);
				if (ptr == NULL)
				{
					_put_string("(nil)");
					return (5);
				}
				addr = (unsigned long int)ptr;
				len = _put_string("0x");
				len += _print_long_hex(addr, 0);
				return (len);
			case 'r':
				len += print_rev(va_arg(args, char*));
				return (len);
				default:
				_putchar('%');
				_putchar(arg);
				return (2);
		}
}

