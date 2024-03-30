#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for integers
 * @c: integer
 * Return: 1 if c is between 0 and 9, 0 otherwise
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
