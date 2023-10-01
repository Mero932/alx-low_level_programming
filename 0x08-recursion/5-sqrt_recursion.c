#include "main.h"
/**
 * _sqrt_recursion - Calculates the square root of a number
 *
 * @n: int for which the square root needs to be calculated.
 * return The square root of n perfect square, -1 otherwise.
 */
int _sqrt_recursion(int n) 
{
if (n < 0) 
{
return (-1);
} 
else if (n == 0 || n == 1) 
{
return (n);
} 
else 
{
int i;
for (i = 1; i * i <= n; i++) 
{
}       
i--;  
if (i * i == n) 
{ 
return (i);
}
else 
{
return (-1);
}
}
}
