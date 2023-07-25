#include <stdio.h>
#include "main.h"
/**
* _puts - to print string
* @s: pointer to display the character
* @counter: integer parameter
*/

void _puts(char *s)
{
int counter;
for (counter=0; *s != '\0'; s++)
{
counter ++;
putchar(*s);
}     
}
