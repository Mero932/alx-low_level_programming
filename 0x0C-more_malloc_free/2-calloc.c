#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int totalSize = nmemb * size;
void *ptr = malloc(totalSize);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, totalSize);
return (ptr);
}

