#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
*alloc_grid - dimensional array of integers
*@rows: (int)
*@columns: (int)
*Return: int**: Pointer to the 2-dimensional array
*/

int **alloc_grid(int width, int height)
{
int **array;
int i, j;
array = (int **)malloc(width * sizeof(int *));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
array[i] = (int *)malloc(height * sizeof(int));
if (array[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(array[j]);
}
free(array);
return (NULL);
}
}
return (array);
}
