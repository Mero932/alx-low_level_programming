#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - Calculate the sum of all parameters.
 *
 * @n: int The number of parameters to sum.
 * Return: SUM or (0)
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
int num;
va_list args;
va_start(args, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}

