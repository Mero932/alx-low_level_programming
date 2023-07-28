#include <stdio.h>
#include <unistd.h>
/**
* _putchar - This function prints a character using the putchar function.
*
* c : character parameter
*/
void _putchar(char c)
{
write (1, &c, 1);
}
