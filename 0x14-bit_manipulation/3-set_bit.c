#include "main.h"
/**
 * set_bit - set bit value
 * @n: unsigned long int
 * @index: unsigned int
 * Return: -1, 1
 */
int set_bit(unsigned long int *n, unsigned int index) 
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
unsigned long int mask = 1UL << index;
*n |= mask;
return (1);
}
