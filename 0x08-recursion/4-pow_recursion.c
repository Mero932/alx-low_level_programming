#include "main.h"
/**
 * _pow_recursion - similar to man pow
 *
 * @x: The base number.
 * @y: The exponent.
 * Return: (1) x raised to power of y, (-1) y is less than zero
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
