/**
* _memcpy - Entry point
* @dest: char
* @src: char
* @n: unsigned int
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int ptr;
for (ptr = 0; n > 0 ; ptr ++, n--)
{
dest[ptr] = src[ptr];
}
return (dest);
}
