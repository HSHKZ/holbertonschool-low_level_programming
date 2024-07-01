#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @a: The set of bytes to search for.
 *
 * Description: This function searches the string `s` for the first occurrence
 *              of any character in the set of bytes `a`. It returns a pointer
 *              to the first occurrence of a matching character in `s`, or NULL
 *              if no match is found.
 *
 * Return: Pointer to the first occurrence of a matching character in `s`,
 *         or NULL if no match is found.
 */

char *_strpbrk(char *s, char *a)
{
	unsigned short int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
