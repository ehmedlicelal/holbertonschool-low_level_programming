#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees allocated grid
 * @grid: grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
