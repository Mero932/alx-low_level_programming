#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* print_rev - reverse printed  characters
* @s: character string 
*
* Return: Always 0 (Success)
*/
void print_rev(char *s)
{
int i;
i = 0;
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
