#include "main.h"
/**
 *_puts_recursion - Print a string followed by a new line.
 *
 * @s char
 */
void _puts_recursion(char *s)
{
if (s == NULL || *s == '\0')
{
return;
}
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
else
{
putchar('\n');
}
}
