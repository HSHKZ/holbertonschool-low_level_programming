#include "main.h"

/**
 * testIfPalindrom - check the code
 *
 * Description: print
 *
 * @first: first char of string
 *
 * @last: last char of string
 *
 * @string: string
 *
 * Return: Always 0.
 */

int testIfPalindrom(int first, int last, char *string)
{
	if (first >= last)
		return (1);
	else if (string[first] != string[last])
		return (0);
	else
		return (testIfPalindrom(first + 1, last - 1, string));
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

int lengthString(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + lengthString(s + 1));
}

/**
 * is_palindrome - check the code
 *
 * Description: print
 *
 * @s: input string
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int i;

	i = lengthString(s) - 1;
	return (testIfPalindrom(0, i, s));
}
