#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @s: The string to search in.
 * @a: The substring to find.
 *
 * Description: This function searches for the first occurrence of the substring `a` in the string `s`. If the substring is found, a pointer to the first occurrence is returned. If the substring is not found, NULL is returned.
 *
 * Return: A pointer to the first occurrence of the substring, or NULL if not found.
 */

char *_strstr(char *s, char *a)

{
	unsigned short int i, j;

	if (*a == '\0')
	{
		return (s);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[0])
		{
			for (j = 0; a[j] == s[i + j]; j++)
			{
				if (a[j + 1] == '\0')
				{
					return (&s[i]);
				}
			}
		}
	}
	return (NULL);
}
