#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy the str.
 * @str: char string
 * Return: (NULL) or (copy).
 */
char *_strdup(char *str)
{
char *dup_str;
int i, len;
len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
dup_str = (char *) malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
dup_str[i] = str[i];
}
dup_str[len] = '\0';
return (dup_str);
}
