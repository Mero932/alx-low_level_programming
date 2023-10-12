#include <stdio.h>
#include <stdarg.h>
 /**
 * print_strings - Print string followed by a new line.
 * 
 * @*separator: const char
 * @n: The number of arguments to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
const char *str = va_arg(args, const char *);
printf("%s", str);
if (i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}


