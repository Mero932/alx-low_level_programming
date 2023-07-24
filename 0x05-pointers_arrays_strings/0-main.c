#include <stdio.h>
#include "main.h"
int main (void)
{
     int n;

    n = 402;
    printf("n=%d\n", n);
    /*putchar('n');
    putchar('=');
    putchar(48+n);*/
    reset_to_98(&n);
    printf("n=%d\n", n);
    /*putchar('n');
    putchar('=');
    putchar(48+n);*/
    return (0);
}
