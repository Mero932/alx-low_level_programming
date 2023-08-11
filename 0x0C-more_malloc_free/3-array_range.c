#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - creates an array of integers from min to max
*@min: (int) The minimum value of the array
*@max: (int) The maximum value of the array
*Return: int*: Pointer to the dynamically allocated array of
*integers
*/
int *array_range(int min, int max)
{
int size = max - min + 1;
int *array = (int *)malloc(size * sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (int i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
