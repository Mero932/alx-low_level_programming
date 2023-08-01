/**
* _strchr - Entry point
* @s: char
* @c: char
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
int ptr = 0;
while (s[ptr] != '\0')
{
if (s[ptr] == c)
{
return (s + ptr);
}
ptr++;
}
return ('\0');
}

