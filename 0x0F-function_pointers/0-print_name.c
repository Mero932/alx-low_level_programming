/**
 * print_name - check the code
 *
 * @name: char
 * @f: void
 */
#include <stdio.h>
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
name++;
}
}

