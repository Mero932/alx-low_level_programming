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
int *length;
*length = array + size - 1;
if (array && size && action)
{
while (array <= end)
{
action(*array++);
}
}
}

