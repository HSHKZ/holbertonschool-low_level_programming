#include <stdio.h>
#include "main.h"

/**
 * _strcat - check the code
 *
 * Description: print
 *
 * @dest: input 1
 *
 * @src: input 2
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, length;

	length = 0;
	j = 0;
	for (i = 0 ; dest[i] != '\0' ; i++)
		length++;
	for (i = length ; src[j] != '\0' ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
