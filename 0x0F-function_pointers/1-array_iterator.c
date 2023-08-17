#include <stdio.h>
/**
 * array_iterator - Execute a function on each element of an array..
 *
 * @array: int.
 * @size: int
 * @action: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
if (array != NULL || action != NULL)
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
