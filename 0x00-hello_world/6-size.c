#include <stdio.h>
#include <stdint.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
char b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n", sizeof(b));
printf("Size of int: %lu bytes\n", sizeof(a));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));

int64_t my_64bit_int;
printf("Size of a char: %lu byte(s)\n", (2 * sizeof(b)));
printf("Size of an int: %lu byte(s)\n", (2 * sizeof(a)));
printf("Size of a long int: %lu byte(s)\n", (2 * sizeof(c)));
printf("Size of a long long int: %lu byte(s)\n", (2 * sizeof(d)));
printf("Size of a float: %lu byte(s)\n", (2 * sizeof(e)));
return (0);
}
