#include "main.h"
/**
* print_last_digit - prints the last digit of a number..
* @num: integer
* Return: (num % 10) integer
*/
int print_last_digit(int num)
{
int last_digit;
last_digit = num % 10;
if (last_digit == 4)
{
_putchar(last_digit + '0');
}
return (last_digit);
}
