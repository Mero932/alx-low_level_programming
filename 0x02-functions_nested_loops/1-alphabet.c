#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_alphabet - lower case with a line between.
*/

void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
