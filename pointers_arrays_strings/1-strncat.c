#include <stdio.h>
#include "main.h"

/**
 * _strncat - check the code
 *
 * Description: print
 *
 * @dest: input 1
 *
 * @src: input 2
 *
 * @n: input 3
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, lengthDest, lengthSrc;

	lengthDest = 0;
	lengthSrc = 0;
	j = 0;
	for (i = 0 ; dest[i] != '\0' ; i++)
		lengthDest++;
	for (i = 1 ; src[i] != '\0' ; i++)
		lengthSrc++;
	for (i = lengthDest ; i < (lengthDest + n) ; i++)
	{
		if (j <= lengthSrc)
			dest[i] = src[j];
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
