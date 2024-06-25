#include <stdio.h>
#include "main.h"

/**
 * _atoi - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int negative = 0;
	int i;
	int stillNumbers = 1;
	int backToOthers = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] == '-') && (stillNumbers == 1))
		{
			if (negative == 1)
				negative = 0;
			else
				negative = 1;
		}
		else if ((s[i] >= '0') && (s[i] <= '9') && (stillNumbers == 1))
		{
			number = (number * 10) + s[i] - '0';
			backToOthers = 1;
		}
		else if (backToOthers == 1)
			stillNumbers = 0;
	}
	if (negative == 1)
		number *= -1;

	return (number);
}
