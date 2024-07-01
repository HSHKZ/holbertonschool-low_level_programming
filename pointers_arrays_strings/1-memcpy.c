#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies a block of memory.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Description: This function copies the contents of the source memory area
 *              to the destination memory area up to a specified number of
 *              bytes.
 *
 * Return: A pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
