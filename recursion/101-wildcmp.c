#include "main.h"

/**
 * isIdentical - searches for the length of the string
 *
 * Description: print
 *
 * @lenFirst: length string 1
 *
 * @lenSecond: length string 2
 *
 * @String1: string 1
 *
 * @String2: string 2
 *
 * Return: Always 0.
 */

int isIdentical(char *String1, char *String2)
{
	if ((String1[0] == '\0') && (String2[0] == '\0'))
		return (1);
	else if ((String1[0] != String2[0]) && (String2[0] != '*'))
		return (0);
	else if (String2[0] != '*')
		return (isIdentical(String1 + 1, String2 + 1));
	else if (String2[1] == String1[0])
		return (isIdentical(String1, String2 + 1));
	else if (String2[1] == String1[1])
		return (isIdentical(String1 + 1, String2 + 1));
	else if (String2[1] == '*')
		return (isIdentical(String1, String2 + 1));
	else if ((String1[0] == '\0') || (String2[0] == '\0'))
		return (0);
	else 
		return (isIdentical(String1 + 1, String2));
}

/**
 * lengthString - searches for the length of the string
 *
 * Description: print
 *
 * @s: input string
 *
 * Return: Always 0.
 */

/*
int lengthString(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + lengthString(s + 1));
}
*/

/**
 * wildcmp - check the code
 *
 * Description: print
 *
 * @s1: input string 1
 *
 * @s2: input string 2
 *
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
/*	int i, j;

	i = lengthString(s1) - 1;
	j = lengthString(s2) - 1;
*/
	return (isIdentical(s1, s2)); 
}
