#include <stdio.h>
/**
* This function prints a character using the putchar function.
* Parameters:
* c (char): The character to be printed
* Returns:
* None
*/
void print_putchar(char c)
{
putchar(c);
}
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
print_putchar('_');
print_putchar('p');
print_putchar('u');
print_putchar('t');
print_putchar('c');
print_putchar('h');
print_putchar('a');
print_putchar('r');
print_putchar('\n');
return (0);
}
