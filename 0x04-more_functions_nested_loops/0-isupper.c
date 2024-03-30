#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: integer
 * Return: 1 if c is upper case, 0 lowercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
