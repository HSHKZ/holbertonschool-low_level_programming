#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Description: This function calculates the length of the initial segment
 *              of string 's' that consists entirely of characters from
 *              string 'accept'.
 *              It scans 's' from the beginning and stops
 *              as soon as it encounters a character that is not present in
 *              'accept', or when it reaches the end of 's'.
 *              It returns the number of characters in the initial segment
 *              of 's' that match 'accept'.
 *
 * Return: The number of characters in the initial segment of 's' that
 *         match 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned short int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
		}
	}
	return (c);
}
