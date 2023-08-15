#include <stdio.h>

/**
 * printFileName: print file
 *
*/
void printFileName() {
 printf("Compiled from file: %s\n", __FILE__);
}


/**
 * main - print file
 * Return: 0
 *
*/

int main()
{
printFileName();
return (0);
}
