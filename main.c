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
    char *str1 = "this is text to be ecrypted !! or is it??\n";
    char *str2 = "this is text to be ecrypted !! or is it??\n";

    _printf("\nof course \na;sdlkfj |n");


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
    
    /* satandart printf dosn't have %b */
   /* printf("real binary %b\n", 0); */
    _printf("fake binary %b woow \n",13241234 );
    
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
     printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Unsigned hexadecimal:[%x]\n", "\n");
    
    
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("_printf Len , printf Len:[%i, %i]\n", len, len2);


    
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    
    _printf("Address:[%p]\n", addr);
     printf("Address:[%p]\n", addr);
    
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Length:[%i, %i]\n", len, len2);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Len From our Printf:[%d]\n", len);
     printf("Len From stadnar pf:[%d]\n", len2);

    _printf("Unknown:[%r]\n", "reverse");

    /*standart printf dosn't have %R */
     /* printf("Unknown:[%R]\n" , "reverse"); */

    _printf("Unknown:[%R]\n", "ENCRIPTION");

    len  =  printf("ENCRYPTION :[%s]\n",str1);
    len2 = _printf("ENCRYPTION :[%R]\n",str2);
     printf("Len:[%d]\n", len);
    _printf("Len From our Printf:[%d]\n", len2);




    _printf("String:[%s]\n", "I am a string !");
     printf("String:[%s]\n", "I am a string !");

    _printf("%S\n", "Best\nSchool");
    _printf("%S\n", "Best\\ School");

    return (0);
}
