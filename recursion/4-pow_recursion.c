#include "main.h"

/**
 * _pow_recursion - check the code
 *
 * Description: print
 *
 * @x: input number
 *
 * @y: input power of
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
