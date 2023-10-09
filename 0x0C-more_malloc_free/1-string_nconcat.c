#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: (NULL) (new_str).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int s1_len, s2_len, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
;
for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
;
if (n >= s2_len)
{
n = s2_len;
}
new_str = malloc(sizeof(char) * (s1_len + n + 1));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < n; j++)
{
new_str[i + j] = s2[j];
}
new_str[i + j] = '\0';
return (new_str);
}
