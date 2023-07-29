#include "main.h"
/**
 * _islower - This function checks if a character is lowercase
 * @c: char - character to be checked
 * Return:(1) if the character is lowercase, (0) otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
