#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory of the 2 dim grid
 * @grid: 2 dim grid created
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
