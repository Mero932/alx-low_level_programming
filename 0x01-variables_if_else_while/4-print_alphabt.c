#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int l;
for (l = 0; l < 26 ; l++)
if (l != 4 && l != 16)
putchar ('a' + l);
putchar ('\n');

return (0);
}
