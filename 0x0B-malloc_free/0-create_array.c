#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - creates an array of chars and init. with a specific char.
*@size : (int) The size of the array
*@initChar: (char) The character to initialize the array with
*Return: Pointer to the created array
*/
char *create_array(unsigned int size, char initChar)
{
char *charArray = malloc(size);
unsigned int i;
if (charArray == NULL || charArray == 0 || size == 0)
{
return (NULL);
}
for (i = 0 ; i < size; i++)
{
charArray[i] = initChar;
}
return (charArray);
}
