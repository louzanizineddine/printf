#include <stdlib.h>
#include "main.h"

/**
 * rot13 - rotate a string 13th times
 *
 * @str: the strin to encodes
 *
 * Description:'Write a function that encodes a string into 1337.
  * Return:  the pointer to coded strng .
 */

char *rot13(char *str)
{
	char *s = str;
	char *rot13 = malloc(sizeof(char) * _strlen(str) + 1);
 	int i;

	if (str == NULL)
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

