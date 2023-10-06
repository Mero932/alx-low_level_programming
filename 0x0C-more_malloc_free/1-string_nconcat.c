#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 * @S1: char
 * @S2: char
 * @n: unsigned int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = strlen(s1);
unsigned int len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
unsigned int len = len1 + n;
char *result = (char *)malloc((len + 1) * sizeof(char));
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}


