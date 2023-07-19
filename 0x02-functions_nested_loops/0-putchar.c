#include <stdio.h>

void print_putchar(char c)
{
 /* 
  * This function prints a character using the putchar function.
  * Parameters:
  * c (char): The character to be printed
  * Returns:
  * None
 */
       	putchar(c);
}

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main()
{
       print_putchar('P');
    print_putchar('u');
    print_putchar('t');
    print_putchar('c');
    print_putchar('h');
    print_putchar('a');
    print_putchar('r');
    print_putchar('\n');
    return 0;
}
