#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_helper - compare the values
 * @s: int
 * @left: int
 * @right: int
 * Return: 1 left > right, s[left] equal s[right], 0 otherwise.
 */
int is_palindrome_helper(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
if (s[left] == s[right])
{
return (is_palindrome_helper(s, left + 1, right - 1));
}
return (0);
}
/**
 * is_palindrome - check if the string is empty
 * @s: int
 * Return: function vlue
 */
int is_palindrome(char *s)
{
return (is_palindrome_helper(s, 0, strlen(s) - 1));
}
