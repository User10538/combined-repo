#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: first string
 * @height: second string
 *
 * Return: NULL or on failure or contains the contents of s1 and s2.
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;


	/* Return NULL if width or height is invalid */
	if (width <= 0 || height <= 0)
	return (NULL);

	/* Allocate memory for row pointers */
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	return (NULL);

	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		/* Free any previously allocated rows */
		if (grid[i] == NULL)
		{
			/* Free any previously allocated rows */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize all elements to 0 */
		for (j = 0; j < height; j++)
		grid[i][j] = 0;


	}

	return (grid);
}
