#include "main.h"
#include <stdio.h>
/**
 * main - print the line
 * @argc: int
 * @argv: list
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int coins[4], numCoins, i, cents;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins[4] = {25, 10, 5, 2, 1};
numCoins = 0;
for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
{
numCoins += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", numCoins);
return (0);
}
