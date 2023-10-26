#include "main.h"

/**
 * binary_to_uint - change binary  to unsigned int
 * @b: char
 * Return: 0, result.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int i;
i = 0;
result = 0;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
result = result * 2 + (b[i] - '0');
i++;
}
return (result);
}
