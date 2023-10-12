#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print numbers followed by a new line.
 * @separator: const char
 * @n: The number of arguments to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

