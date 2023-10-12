#include <stdio.h>
#include <stdarg.h>	 
/**
 * @print_all - Print anything using a format string.
 * @format: int format The format string.
*/
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
vprintf(format, args);
va_end(args);
}

