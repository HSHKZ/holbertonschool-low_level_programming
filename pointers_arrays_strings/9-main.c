#include <stdio.h>
#include "main.h"

/**
 * _strcpy - check the code
 *
 * Description: print
 *
 * @dest: input destination
 *
 * @src: input source
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;
	for (i = 0 ; src[i] != '\0' ; i++)
		length++;
	for (i = 0 ; i <= length ; i++)
		dest[i] = src[i];

	return (dest);
}
