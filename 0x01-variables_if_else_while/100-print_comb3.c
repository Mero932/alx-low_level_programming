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
if (start <= 0 || start > 9 || end <= 0 || end > 9)
{
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (i > j || i == j)
{
continue;
}
putchar('0' + i);
putchar('0' + j);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
