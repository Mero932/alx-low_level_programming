#include "main.h"
/**
* print_last_digit - prints the last digit of a number..
* @num: integer
* Return: (num % 10) integer
*/
int print_last_digit(int num)
{
int lastdigit;
lastdigit = num % 10;
_putchar(lastdigit + '0');
return (lastdigit);
}
