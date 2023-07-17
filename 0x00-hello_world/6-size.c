#include <stdio.h>
#include <stdint.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int32_t my_32bit_int;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

int64_t my_64bit_int;
printf("Size of a char: %lu byte(s)\n", (2 * sizeof(char)));
printf("Size of an int: %lu byte(s)\n", (2 * sizeof(int)));
printf("Size of a long int: %lu byte(s)\n", (2 * sizeof(long int)));
printf("Size of a long long int: %lu byte(s)\n", (2 * sizeof(long long int)));
printf("Size of a float: %lu byte(s)\n", (2 * sizeof(float)));
return (0);
}
