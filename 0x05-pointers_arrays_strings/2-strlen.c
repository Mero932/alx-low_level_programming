#include <stdio.h>
#include "main.h"
/**
* _strlen - calculate the length of the string
* @s: string
* @counter: integer parameter
* Return: return counters
*/

int _strlen(char *s)
{ 
int counter;
for (counter=0; *s != '\0'; s++)
{
counter ++;
}
return (counter);
    
}

