#include "main.h"

/**
* main - Entry point
* Return: Always destination as (Success)
*/

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0; 
while(dest[c])
{
    c++;
}
for (c2=0 ; src[c2] != '\0' ; c2++)
{
dest[c++] = src [c2];
}
return dest;

}
 
