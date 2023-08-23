#include "main.h"
/**
 * _strstr - Find the first occurrence of a substring in a string.
 *
 * @haystack: char
 * @needle: char
 */
char *_strstr(char *haystack, char *needle)
{
if (haystack == NULL || needle == NULL)
{
return (NULL);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
