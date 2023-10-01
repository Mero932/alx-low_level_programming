#include "main.h"
/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * @n: An integer to be checked.
 * return (1) input integer is a prime number, (0) otherwise.
 */
int is_prime_number(int n) 
{
if (n <= 1) 
{
return 0;
}
for (int i = 2; i * i <= n; i++) 
{
if (n % i == 0) 
{
return (0);
}
}
return (1);
}
