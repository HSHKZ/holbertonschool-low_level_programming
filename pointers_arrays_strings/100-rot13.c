#include <stdio.h>
#include "main.h"

/**
 * rot13 - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i] >= 'A') && (s[i] <= 'Z')))
		{
			while (((s[i] >= 110) && (s[i] <= 122)) || ((s[i] >= 78) && (s[i] <= 90)))
			{
				s[i] = s[i] - 26;
				break;
			}
			s[i] = s[i] + 13;
		}
	}
	return (s);
}
