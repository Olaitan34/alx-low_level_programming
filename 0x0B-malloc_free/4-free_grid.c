#include <stdlib.h>
#include "main.h"
/**
 * my_free_grid - Free the memory allocated for a grid.
 * @grid: Grid to free.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	// Free the memory for each row in the grid.
	for (i = 0; i < height; i++)
		free(grid[i]);

	// Free the memory for the array of integer pointers.
	free(grid);
}

