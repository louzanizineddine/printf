#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char *str111  = "this is text to be ecrypted !! or is it??\n";
    char *str2 = "this is text to be ecrypted !! or is it??\n";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    
    /* printf("real binary %b\n", 0); */
    _printf("fake binary %b woow \n",13241234 );
    
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Unsigned hexadecimal:[%x]\n", "\n");
    
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    
    len = _printf("String:[%s]\n", "I am a string !");
    len2 =printf("String:[%s]\n", "I am a string !");
    
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Length:[%i, %i]\n", len, len2);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Len From our Printf:[%d]\n", len);
    printf("Len:[%d]\n", len2);


    _printf("Unknown:[%r]\n", "reverse");
    /* printf("Unknown:[%R]\n" , "reverse");*/

    _printf("Unknown:[%R]\n", "ENCRIPTION");

    len  =  printf("ENCRYPTION :[%s]\n",str111);
    len2 = _printf("ENCRYPTION :[%R]\n",str2);
     printf("Len:[%d]\n", len);
    _printf("Len From our Printf:[%d]\n", len2);




    _printf("String:[%s]\n", "I am a string !");
     printf("String:[%s]\n", "I am a string !");

/* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x  */
    _printf("%S\n", "Best\nSchool");

    return (0);
}
