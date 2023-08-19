#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, start, end;
start = 0;
end = 0;
if (start < 0 || start > 9 || end < 0 || end > 9)
{
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i > j)
{
continue;
}
putchar('0' + i);
putchar('0' + j);
putchar(' ');
}
putchar('\n');
}
}
return (0);
}
