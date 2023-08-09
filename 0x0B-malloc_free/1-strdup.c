#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the str.
 *@str: char string
 * Return: (NULL) or (copy).
 */
char *_strdup(char *str)
{ int j, length;
char *copy;
if (str == NULL)
{
return (NULL);
}
for (length = 0; str[length] != '\0'; length++)
{
copy = malloc(length * sizeof(*str) + 1);
if (copy == 0)
{
return (NULL);
}
else
{
for (j = 0; j < length; j++)
{
copy[j] = str[j];
}
}
}
return (copy);
}
