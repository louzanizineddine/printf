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
    int len, len2;
    unsigned int ui;
    void *addr;
    char *str1, *str2;

    str1 = "this is text to be ecrypted !! or is it??\n";
    str2 = "this is text to be ecrypted !! or is it??\n";



    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");


    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

     len =_printf("Length:[%d, %i]\n", len, len);
      len2 =printf("Length:[%d, %i]\n", len2, len2);
printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);

     len =_printf("Negative:[%d]\n", -762534);
      len2 =printf("Negative:[%d]\n", -762534);
     printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);

     len =_printf("Unsigned:[%u]\n", ui);
      len2 =printf("Unsigned:[%u]\n", ui);
     printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);

     len =_printf("Unsigned octal:[%o]\n", ui);
      len2 =printf("Unsigned octal:[%o]\n", ui);
     printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);
    
    /* satandart printf dosn't have %b */
   /* printf("real binary %b\n", 0); */
    _printf("fake binary %b woow \n",13241234 );
    
      len  = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
      len2 =  printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
     printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);

    _printf("Unsigned hexadecimal:[%x]\n", "\n");

    
    
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("_printf Len , printf Len:[%i, %i]\n", len, len2);


    
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("our Length, standart Lenght:[%i, %i]\n", len, len2);
    
    len  = _printf("Address:[%p]\n", addr);
    len2 =  printf("Address:[%p]\n", addr);
    printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);
    
    len  = _printf("Percent:[%%]\n");
    len2 =  printf("Percent:[%%]\n");
    printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);

    len  = _printf("Let's try to printf a simple sentence.\n");
    len2 =  printf("Let's try to printf a simple sentence.\n");

    _printf("Len From our Printf:[%d]\n", len);
     printf("Len From stadnar pf:[%d]\n", len2);

    _printf("Unknown:[%r]\n", "reverse");

    /*standart printf dosn't have %R */
     /* printf("Unknown:[%R]\n" , "reverse"); */

    len   = _printf("Unknown:[%s]\n", "ROT13 ENCRIPTION");
    len2  = _printf("Unknown:[%R]\n", "ROT13 ENCRIPTION");
    printf("Our printf Length, stadnart printf Length:[%i, %i]\n", len, len2);

    len  =  printf("ENCRYPTION :[%s]\n",str1);
    len2 = _printf("ENCRYPTION :[%R]\n",str2);
     printf("Len From Standard :[%d]\n", len);
    _printf("Len From our Printf:[%d]\n", len2);


    _printf("9. Print some money and give it to us for the rain forests");

    _printf("String:[%s]\n", "I am a string !");
     printf("String:[%s]\n", "I am a string !");

    _printf("%S\n", "Best\nSchool");
    _printf("%S\n", "Best\\ School");

    return (0);
}
