#include <stdio.h>
#define PRINT_FILE_NAME printf("Compiled from file: %s\n", __FILE__) 
/**
 * main - print file
 *
 * Return: Always 0
 *
 */
int main()
{
PRINT_FILE_NAME;    
return (0);
}
