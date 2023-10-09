#include "main.h"
/**
 * _sqrt_recursion - Calculates the square root of a number
 *
 * @n: int for which the square root needs to be calculated.
 * @start: int
 * @end: int
 * Return - (n) The square root of n perfect square, (-1) otherwise, mid
 */
int sqrt_helper(int n, int start, int end);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt_helper(n, 0, n));
}
/**
 * sqrt_helper - sqrt helper
 * @n: int
 * @start: int
 * @end: int
 * Return - (mid) The square root of n perfect square, (-1) otherwise, mid
 */
int sqrt_helper(int n, int start, int end)
{
int mid;
int square;
if (start > end)
{
return (-1);
}
mid = (start + end) / 2;
square = mid *mid;
if (square == n)
{
return (mid);
}
else if (square < n)
{
return (sqrt_helper(n, mid + 1, end));
}
else
{
return (sqrt_helper(n, start, mid - 1));
}
}
