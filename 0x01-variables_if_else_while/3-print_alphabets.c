#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int l;
for (l = 0; l < 26; l++)
putchar('a' + l);
for (l = 0; l < 26; l++)
putchar ('A' + l);
putchar('\n');

return (0);
}
