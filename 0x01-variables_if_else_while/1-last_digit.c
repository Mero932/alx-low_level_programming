#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* print numbers regardless the sign negative positive zero*/
int main(void)
{
/*
*
* main function to generate random number every time the program runs and print the last number 
*
*/

unsigned int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

/*n=abs(n);*/
ld = n%10;

if (ld > 5)
{
printf("Last digit of %u is %u and is greater than 5\n",n,ld);
}
else if (ld == 0)
{
printf("Last digit of %u is %u and is zero\n",n,ld);
}
else if (ld < 6)
{
printf("Last digit of %u is %u and is less than 6 and not 0\n",n,ld);
}        
        return (0);
}
