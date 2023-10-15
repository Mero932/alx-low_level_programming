#include "main.h"
/**
 * _sqrt_recursion - Calculates the square root of a number
 *
 * @n: int for which the square root needs to be calculated.
 * @square: int
 * Return - sqrt helper n
 */
int sqrt_helper(int n, int square);
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}
/**
 *sqrt_helper - sqrt helper
 *@n: int
 *@squre: int
 *
 *Return: square, -1
 */
int sqrt_helper(int n, int square)
{
if (square * square == n)
return (square);
if (square * square < n)
{
return (sqrt_helper(n, square + 1));
}
else
return (-1);
}
