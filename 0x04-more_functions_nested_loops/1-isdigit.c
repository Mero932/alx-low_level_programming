#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for uppercase character.
 * @c: integer
 * Return: 1 if c is upper case, 0 lowercase
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
