#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - This function allocates memory using malloc.
 * @b: (unsigned int) The size of the memory to be alloca
 * Return: void*: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(1);
}
return (ptr);
}
