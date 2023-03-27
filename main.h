#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>

int _strlen(char *s);
int _putchar(char c);
int  _put_string(char *str);
int _print_number(int n);
int _print_arg(char arg, va_list args);
int test_odd_number_of_percentages(const char *format);
int test_edge_cases(const char *format);
int _printf(const char *format, ...);

#endif

