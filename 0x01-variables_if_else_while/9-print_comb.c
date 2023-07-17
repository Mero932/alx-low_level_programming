#include <stdio.h>

int main (void)
{
    int i;

    for (i = 48; i <58; i++)
    {
        while (i<57 )
            putchar(44);
            putchar(32);
    }
    putchar('!' + 3);

    return 0;
}
