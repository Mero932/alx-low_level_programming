#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i
i = 0;
while (i <= 9)
{
_putchar('0' + i);
_putchar(' ');
_putchar('x');
_putchar(' ');
_putchar('9');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar('0' + i*9);
_putchar('\n');
i++;
}
}
