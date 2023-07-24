#include <stdio.h>
#include "main.h"
/**
* swap_int - Entry point
* @n: integer parameter
* @a: integer parameter
* @b: integer parameter
* 
*/
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;

}
