#include <stdio.h> 
/**
 * Checks if a string is a palindrome.
 *
 * @param s: A pointer to a null-terminated string.
 * @return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s) 
{
int len = 0;
while (s[len] != '\0') 
{
len++;
}
int i = 0;
int j = len - 1;
while (i < j) 
{
if (s[i] != s[j]) 
{
return (0); 
}
i++;
j--;
}
return (1);  
}

