#include <stddef.h>
#include "main.h"

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
