#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2 dimension grid.
 * @grid: integers.
 * @height: grid.
 * Return: nil
 */
void free_grid(int **grid, int height)
{
        if (grid != NULL && height != 0)
        {
                for (; height >= 0; height--)
                        free(grid[height]);
                free(grid);
        }
}
