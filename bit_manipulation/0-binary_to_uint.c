#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int valeur_convertie = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		valeur_convertie = valeur_convertie * 2 + (*b - '0');
		b++;
	}
	return (valeur_convertie);
}
