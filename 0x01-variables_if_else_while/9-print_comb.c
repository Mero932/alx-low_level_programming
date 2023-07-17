#include <stdio.h>

int main (void)
{
    int i = 0;

    for (i = 0; i <9; i++)
    {
            putchar('0'+i);
       
            putchar(',');

    }
    putchar('!' + 24);
    putchar('!' + 3);

    return 0;
}
