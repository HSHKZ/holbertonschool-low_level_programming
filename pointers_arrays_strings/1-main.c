#include "main.h"

/**
 * swap_int - Function to swap values
 *
 * @a: pointer 1
 *
 * @b: pointer 2
 *
 * Return: zero if succesful
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
