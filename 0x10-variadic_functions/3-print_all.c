#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    char *s;
    int i;
    float f;
    char c;
    int j = 0;

    va_start(args, format);

    while (format && format[j])
    {
        switch (format[j])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                {
                    printf("(nil)");
                    break;
                }
                printf("%s", s);
                break;
            default:
                j++;
                continue;
        }
        if (format[j + 1])
            printf(", ");
        j++;
    }
    printf("\n");
    va_end(args);
}

