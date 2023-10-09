#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *_memset - return the ptr value
 * @ptr: int
 * 
 *
 * Return: ptr integer
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr;
*ptr = s;
while (n--)
*s++ = b;
return (ptr);
}
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);
if (m == 0)
return (NULL);
_memset(m, 0, sizeof (int) * nmemb);
return (m);
}

