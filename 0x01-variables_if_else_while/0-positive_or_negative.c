#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*
* main: print numbers regardless the sign negative positive zero
 */
int main(void)
{
/*
 * main function to print the numbers
 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%u is positive\n", n);
	else if (n == 0)
	printf("%u is zero\n", n);
	else
	printf("%d is negative\n", n);
/* that was to print the numbers regardless the sign */
	return (0);
}
