#include "main.h"
/**
 * factorial - recursion function
 *@n: int
 * Return: (1) if equal zero, (-1) if less than zero
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
int result;
result = factorial(n - 1) * n;
return (result);
}
