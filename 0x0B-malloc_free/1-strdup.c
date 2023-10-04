#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy the str.
 * @str: char string
 * Return: (NULL) or (duplicate).
 */
char *_strdup(char *str)
{
int length;
if (str == NULL)
{
return (NULL);
}
length = strlen(str);
char *duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
