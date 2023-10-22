#include <stdio.h>
/**
 * wildcmp - check the similarity
 * @s1: int
 * @s2: int
 * Return: 1 identical, 0 not identical, equation for checking.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*' || *s1 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
return (0);
}
