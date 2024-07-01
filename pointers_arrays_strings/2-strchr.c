#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Description: This function searches for the first occurrence of
 *              the character 'c' in the string 's'. If the character
 *              is found, a pointer to the character in the string is
 *              returned. If the character is not found, NULL is returned.
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned short int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
