#include "main.h"
/**
* _isalpha - check if the character is alpha
* @c: char-character
* Return: (1) alphabet , (0) otherwise
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
