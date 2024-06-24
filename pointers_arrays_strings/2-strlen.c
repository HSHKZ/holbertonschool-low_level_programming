#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length
 *
 * @str: to get the length
 *
 * Return: the length of @str.
 */

size_t _strlen(const char *str)
	
{

	size_t length = 0;

	while (*str++)
		length++;
	return (length);

}
