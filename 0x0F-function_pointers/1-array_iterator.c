#include <stdio.h>
/**
 * array_iterator - Execute a function on each element of an array..
 *
 * @array: int.
 * @size: unsigned long int
 * @action: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (array != NULL || action != NULL)
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
