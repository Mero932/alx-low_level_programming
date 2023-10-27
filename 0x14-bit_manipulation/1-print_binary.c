#include "main.h"

/**
 * print_binary - change binary  to unsigned int
 * @n: unsigned long int
 */
void print_binary(unsigned long int n) 
{
if (n > 1) 
{
print_binary(n >> 1);
}
printf("%lu", n & 1);
}
