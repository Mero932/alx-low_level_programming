#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
int main(int argc, char *argv[]) 
{
int num1;
int num2;
int result;
char operator;
if (argc != 4) 
{
printf("Usage: ./arithmetic <num1> <operator> <num2>\n");
return (1);
} 
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2][0];
if (operator == '+')
{
result = num1 + num2;
} 
else if (operator == '-') 
{
result = num1 - num2;
}
else if (operator == '*') 
{
result = num1 * num2;
} 
else 
{
printf("Invalid operator\n");
return (1);
}
printf("Result: %d\n", result);
return (0);
}
