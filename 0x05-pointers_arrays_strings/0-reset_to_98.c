#include <stdio.h>
#include "main.h"
/**
* main - reset n to 98
* n is the memory memort location
* *n is the pointer
* Return: Always 0 (Success)
*/

void reset_to_98(int *n)
{
if (*n != 98)
{
*n = 98;
}
else
{
*n = 98;
}
}

/*
* int main (void)
* {
* int n;
* n = 402;
* printf("n=%d\n", n);
* putchar('n');
* putchar('=');
* putchar(48+n);
* reset_to_98(&n);
* printf("n=%d\n", n);
* putchar('n');
* putchar('=');
* putchar(48+n);
* return (0);
* }
*/
