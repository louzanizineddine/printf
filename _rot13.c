#include <stdlib.h>
#include "main.h"
/**
 * leet- output function
 *
 * @s: the strin to encodes
 *
 * Description:'Write a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation'
 *
 * Return:  the pointer to coded strng .
 */
char *rot13(char *str)
{
	char *s = str;
	char *rot13 = malloc(sizeof(char) * _strlen(str) + 1);
	int i;

	if (rot13 == NULL)
		return (NULL);

	for (i = 0; *s != '\0'; s++, i++)
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
			rot13[i] = *s + 13;
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
			rot13[i] = *s - 13;
		else
			rot13[i] = *s;
	}

	rot13[i] = '\0';

	return (rot13);
}

