#include "main.h"
/**
* print_sign - prints the sign of a number.
* @n: integer
* Return: (1) greater than zero , (0) zero , (-1) less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
