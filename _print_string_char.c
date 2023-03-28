#include "main.h"

/**
 *  _put_S - print string
 * Description: prints a string
 * 
 * @str: the input string
 *
 * Handle the following custom conversion specifier:
 * S - prints the string.
 * Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x,
 * followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * Return: number of string printed
 */

int  _put_S(char *str)
{
	int i, len, printed = 0;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c < 32 || c >= 127)
		{
			printed += _putchar('\\') + _putchar('x');
			if (c < 16)
				printed += _putchar('0');

			printed += _print_hex((unsigned char)c, 1);
		}
		else
			printed += _putchar(c);
	}
	len = i + printed;
	return  (len);
}
/**
 *  _put_string - print string
 * 
 * Description: prints a string
 * 
 * @str: the input string
 *
 * Handle the following custom conversion specifier:
 * S - prints the string.
 * Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x,
 * followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * Return: number of string printed
 */

int  _put_string(char *str)
{
        int i;
	
	i = 0;
        while (str[i] != '\0' && str[i] != '\n')
        {
		if ((0 < str[i] && str[i] < 32) || str[i] >= 127)
		{
			_putchar(92);
			_putchar('x');
			_print_hex(str[i], 1);
			i++;
		}
                _putchar(str[i]);
                i++;
        }
	if (str[i] == '\n')
		_putchar('\n');
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
        /* char reverse; */
        while (string_len)
        {
                /* reverse = s + string_len; */
                --string_len;
                _putchar(s[string_len]);
                i++;
        }
        return (i);
}
