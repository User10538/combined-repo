#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: previously created grid
 * @height: second string
 *
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
