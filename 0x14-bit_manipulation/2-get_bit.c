#include "main.h"
/**
 * get_bit - return value
 * @n: unsigned long int
 * @index: unsigned int
 * Return: -1, (n>>index)&1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
