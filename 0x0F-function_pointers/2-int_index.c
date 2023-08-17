#include <stdio.h>
/**
 * int_index - Search for an integer in an array.
 *
 * @array: int
 * @size: int
 * @cmp: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size ; i++)
{
if (cmp(array[i]) != 0)
{return (i);
}
}
}
else
{
return (-1);
}
}

