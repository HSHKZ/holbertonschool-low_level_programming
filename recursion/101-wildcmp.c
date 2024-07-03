#include "main.h"

/**
 * isIdentical - searches for the length of the string
 *
 * Description: print
 *
 * @String1: string 1
 *
 * @String2: string 2
 *
 * @holdString: holds after *
 *
 * Return: Always 0.
 */

int isIdentical(char *String1, char *String2, char *holdString)
{
	if ((String1[0] == '\0') && (String2[0] == '\0'))
		return (1);
	else if ((String1[0] == '\0') && (String2[0] == '*'))
		return (isIdentical(String1, String2 + 1, String2 + 1));
	else if ((String1[0] == '\0') && (String2[0] != '\0'))
		return (0);
	else if (String2[0] == '*')
		return (isIdentical(String1, String2 + 1, String2 + 1));
	else if (String2[0] == String1[0])
		return (isIdentical(String1 + 1, String2 + 1, holdString));
	else
		return (isIdentical(String1 + 1, holdString, holdString));
}

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
	if ((s1[0] == '\0') && (s2[0] == '\0'))
		return (1);
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else if (s2[0] == '*')
		return (isIdentical(s1, s2 + 1, s2 + 1));
	else
		return (0);
}
