#include "main.h"
/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * @n: The integer to be checked.
 * Return: 1 integer is prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
int i;
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}
if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
i = 5;
if (i *i <= n)
{
if (n % i == 0 || n % (i + 2) == 0)
{
return (0);
}
i += 6;
}
return (1);
}
