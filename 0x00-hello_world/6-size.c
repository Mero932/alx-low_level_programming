#include <stdio.h>
#include <stdint.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int32_t my_32bit_int;
printf("size of a char: %lu\t", sizeof(char), "\tbyte(s)");
printf("%lu\n", sizeof(int));
printf("%lu\n", sizeof(long int));
printf("%lu\n", sizeof(long long int));
printf("%lu\n", sizeof(float));

int64_t my_64bit_int;
printf("%lu\n", sizeof(char));
printf("%lu\n", sizeof(int));
printf("%lu\n", sizeof(float));
printf("%lu\n", sizeof(double));

return (0);
}
