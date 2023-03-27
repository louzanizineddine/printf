#include "main.h"

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

