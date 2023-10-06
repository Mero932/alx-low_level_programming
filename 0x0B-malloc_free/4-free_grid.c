#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - 2D grid
*@s1: (cint) 
*@s2: (cint) The second string
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

