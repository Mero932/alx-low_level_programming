/**
* _memset -  Entry point
* @n: unsigned int
* @b: character
* @s: character
* Return: S
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int ptr;
for (ptr = 0; n > 0 ; ptr++, n--)
{
s[ptr] = b;
}
return (s);
}
