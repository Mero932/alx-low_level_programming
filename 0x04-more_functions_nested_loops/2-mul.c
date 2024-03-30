#include "main.h"
#include <stdio.h>

/**
 * mul - multiply2 integers
 * @a: integer
 * @b: integer
 * Return: result
 */
int mul(int a, int b)
{
int result;
int sign;
result = 0;
sign = 1;
if (a < 0)
{
a = -a;
sign = -sign;
}
if (b < 0)
{
b = -b;
sign = -sign;
}
while (b > 0)
{
if (b % 2 == 1)
{
result += a;
putchar('1');
}
else
{
putchar('0');
}
a <<= 1;
b >>= 1;
}
if (sign < 0)
{
putchar('-');
}
return (result);
}
