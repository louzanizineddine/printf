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

