#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*str_concat - concatenates two strings and returns the result.
*@s1: (char) The first string
*@s2: (char) The second string
*Return: char*: The concatenated string
*/
char *str_concat(char *s1, char *s2)
{
int len1, len2;
char *result;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
len1 = strlen(s1);
len2 = strlen(s2);
result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}

