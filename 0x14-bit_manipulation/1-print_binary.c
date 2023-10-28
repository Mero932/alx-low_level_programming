#include "main.h"

/**
 * print_binary - change binary  to unsigned int
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
unsigned long int highest_bit;
highest_bit = 1;
if (n == 0)
{
printf("0");
return;
}
while (highest_bit <= n)
{
highest_bit <<= 1;
}
highest_bit >>= 1;
while (highest_bit > 0)
{
if (n & highest_bit)
{
printf("1");
}
else
{
printf("0");
}
highest_bit >>= 1;
}
}

