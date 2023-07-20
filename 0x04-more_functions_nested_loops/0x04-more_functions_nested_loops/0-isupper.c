#include <stdio.h>
//#include <main.h>
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1; 
        putchar('\n');
        
    } else {
        return 0;

    putchar('\n');    }

}

int main(void)
{
    char c;

    c = 'A';
    putchar ('A');
    putchar (':');
    putchar ('1');
    putchar ('\n');
    c = 'a';
    putchar ('a');
    putchar (':');
    putchar ('0');
    putchar ('\n');
    return (0);
}
