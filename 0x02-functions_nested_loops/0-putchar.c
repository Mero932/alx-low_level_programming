#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* _putchar - This function prints a character using the putchar function.
*
* c : character parameter
*/
int _putchar(char c)
{
return (write (1, &c, 1));
}
