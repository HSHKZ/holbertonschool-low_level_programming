#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Description: This function fills the first 'n' bytes of the memory
 *              pointed to by 's' with the constant byte 'b'.
 *
 * Return: A pointer to the memory area 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
