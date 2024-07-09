#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - begining
 *
 * Description: print if negative or positive
 *
 * @width: width of array
 *
 * @height: height of array
 *
 * Return: 0 ends the program
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(array[j]);
			free(array);
		}
		for (j = 0 ; j < width ; j++)
			array[i][j] = 0;
	}
	return (array);
}
