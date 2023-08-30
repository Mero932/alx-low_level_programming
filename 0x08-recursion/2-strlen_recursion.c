#include "main.h"
/**
 *_strlen_recursion - Get the length of a string.
 *
 * @s: Char
 * Return: length value
 */
int _strlen_recursion(char *s)
{
int length;
length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
