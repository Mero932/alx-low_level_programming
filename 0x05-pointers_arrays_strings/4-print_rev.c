#include <stdio.h>
#include <string.h>
#include "main.h"
void print_rev(char *s)
{
/**
* print_rev - Entry function
* @i: integer parameter 
*
* Return: Always 0 (Success)
*/
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i--)
{
putchar (s[i]);
}
    putchar('\n');
}
