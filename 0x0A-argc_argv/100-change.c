#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[]) 
{
int cents, coins[], numCoin, i;
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
coins[] = {25, 10, 5, 2, 1};
numCoins = 0;
for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++) 
{
numCoins += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", numCoins);
return (0);
}
