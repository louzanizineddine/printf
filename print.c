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
 * print_binary - prints in  binary unsigned int
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

