#include <stdio.h>

int main (void)
{
    int i = 0;

    for (i = 48; i <58; i++)
    {
        putchar (i);
        if (i<57)
        {
            putchar(44);
            putchar(32);
    }
    }
   putchar('\n'); 
    return 0;
}
