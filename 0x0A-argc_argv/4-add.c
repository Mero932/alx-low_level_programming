#include "main.h"
#include <stdio.h>
/**
*main - prints all the arguments received by the program.
*@argc: int
*@argv: char*[]
*Return: Always 0
*/
int main(int argc, char *argv[])
{   
int sum, num, j, i;
sum = 0;
if (argc == 1) 
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++) {
num = 0;
j = 0;
while (argv[i][j] != '\0') 
{
if (argv[i][j] < '0' || argv[i][j] > '9') 
{
printf("Error\n");
return (1);
}
num = num * 10 + (argv[i][j] - '0');
j++;
}
sum += num;
}
printf("%d\n", sum);
return (0);
}

