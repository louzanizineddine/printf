#include "main.h"

/**
 *  _print_number - print numbers
 * Description: prints a numbser
 * @n: the input number
 *
 * Return: number printed digits
 */
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

	return (num_printed);
}

/**
 * _print_binary - prints in  binary unsigned int
 * @n: unsigned int to print
 * Return: number of digits printed
 */
int _print_binary(unsigned int n)
{
	int count = 0;

	if (n < 2)
	{
		_putchar(n + '0');
		return (1);
	}

	count += _print_binary(n / 2);
	_putchar((n % 2) + '0');
	count++;

	return (count);
}
/**
 * _print_unsigned - prints an unsigned int
 * @n: unsigned int to print
 * Return: number of digits printed
 */
int _print_unsigned(unsigned int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n / 10)
		count += _print_unsigned(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

/**
 * _print_octal - prints the octal representation of an unsigned int
 * @n: unsigned int to print
 * Return: number of digits printed
 */
int _print_octal(unsigned int n)
{
	int count = 0;
	char octal[100];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		octal[i] = (n % 8) + '0';
		n = n / 8;
		i++;
	}

	count += i;

	while (i--)
		_putchar(octal[i]);

	return (count);
}
/**
 * _print_hex - prints an unsigned integer in hexadecimal format
 * @n: the unsigned integer to print
 * @uppercase: a flag to print the letters in uppercase format
 *
 * Return: the number of characters printed
 */
int _print_hex(unsigned int n, int uppercase)
{
	char hex[100];
	int count = 0, i = 0, temp;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}

	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else if (uppercase)
			hex[i] = temp - 10 + 'A';
		else
			hex[i] = temp - 10 + 'a';
		n /= 16;
		i++;
	}

	while (i-- > 0)
	{
		_putchar(hex[i]);
		count++;
	}

	return (count);
}
/**
 * _print_long_hex - prints an unsigned integer in hexadecimal format
 * @n: the unsigned integer to print
 * @uppercase: a flag to print the letters in uppercase format
 *
 * Return: the number of characters printed
 */
int _print_long_hex(unsigned long int n, int uppercase)
{
	char hex[100];
	int count = 0, i = 0, temp;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}

	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else if (uppercase)
			hex[i] = temp - 10 + 'A';
		else
			hex[i] = temp - 10 + 'a';
		n /= 16;
		i++;
	}

	while (i-- > 0)
	{
		_putchar(hex[i]);
		count++;
	}

	return (count);
}

