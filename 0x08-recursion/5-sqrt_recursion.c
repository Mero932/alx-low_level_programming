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
        return -1;
    if (n == 0 || n == 1)
        return n;

    return _sqrt_helper(n, 1, n);
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
   mid = (start + end) / 2;

    if (mid * mid == n)
        return mid;
    if (mid * mid < n)
    {
        if ((mid + 1) * (mid + 1) > n)
            return mid;
        else
            return _sqrt_helper(n, mid + 1, end);
    }
    else
    {
        return _sqrt_helper(n, start, mid - 1);
    }
}
