#include "main.h"
/**
 *print_diagsums - Print the sum of the two diagonals
 * @a: (int)
 * @size: (int)
 */
void print_diagsums(int *a, int size)
{
int diag1Sum = 0;
int diag2Sum = 0;
int i;
for (i = 0; i < size; i++)
{
diag1Sum += a[i * size + i];
}
for (i = 0; i < size; i++)
{
diag2Sum += a[i * size + (size - 1 - i)];
}
printf("%d", diag1Sum);
printf(",");
printf("%d\n", diag2Sum);
}

