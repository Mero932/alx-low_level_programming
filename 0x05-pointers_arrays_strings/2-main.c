#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* str: characters
* len: integer parameter
* Return: Always 0 (Success)
*/

int main(void) 
{
char *str;
int len;
str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
