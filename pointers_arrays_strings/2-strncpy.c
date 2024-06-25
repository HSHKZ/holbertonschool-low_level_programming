#include <stdio.h>
#include "main.h"

/**
 * _strncpy - check the code
 *
 * Description: print
 *
 * @dest: input destination
 *
 * @src: input source
 *
 * @n: input length
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, length;

	length = 0;
	for (i = 0 ; src[i] != '\0' ; i++)
		length++;
	for (i = 0 ; i < n ; i++)
	{
		if (i < length)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
