#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: The input array representing the square matrix.
 * @s: The size of the matrix.
 *
 * Description: This function takes an array `a` representing a square matrix
 *              of size `s` and prints the sum of the diagonals of the matrix.
 *              It calculates the sum of the main diagonal elements by
 *              accessing the elements using the formula `a[i * s + i]`, where
 *              `i` is the index. Similarly, it calculates the sum of the
 *              secondary diagonal elements by accessing the elements using
 *              the formula `a[i * s + (s - 1 - i)]`. Finally, it uses the
 *              `printf` function to print the sums of the diagonals.
 *
 * Return: void
 */
void print_diagsums(int *a, int s)
{
	int i, j = s - 1, n = 0, m = 0;

	for (i = 0; i < s; i++)
	{
		n += *(a + i * s + i);
	}
	for (i = 0; i < s && j >= 0; i++, j--)
	{
		m += *(a + i * s + j);
	}
	printf("%d, %d\n", n, m);
}
