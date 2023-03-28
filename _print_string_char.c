#include "main.h"

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
