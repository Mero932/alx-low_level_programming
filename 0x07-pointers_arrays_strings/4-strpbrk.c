#include "main.h"
/**
* *_strpbrk - Entry point
* @s: char
* @accept: char
* Return: (p) return the letter
*         (o) otherwise
*/

char *_strpbrk(char *s, char *accept)
{unsigned int i, j;
char *p;
for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; accept[j] != '\0' ; j++)
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
}
}
return (0);
}
