#include <stdio.h>
#include "main.h"

/**
 * rev_string - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, length;
	char t;

	length = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	length--;
	for (i = 0 ; i <= (length / 2) ; i++)
	{
		t = s[i];
		s[i] = s[length - i];
		s[length - i] = t;
	}
}
