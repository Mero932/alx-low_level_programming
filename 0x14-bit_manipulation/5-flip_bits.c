#include <stdio.h>
/**
 * flip_bits - Counts the number of bits that need to be flipped.
 *
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorResult;
unsigned int count;
xorResult = n ^ m;
count = 0;
while (xorResult != 0)
{
count += xorResult & 1;
xorResult >>= 1;
}
return (count);
}
