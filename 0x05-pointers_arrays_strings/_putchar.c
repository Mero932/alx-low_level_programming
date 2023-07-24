#include <unistd.h>
/**
* _putchar - print 1 char
*
* Return: 1 (Success)
* -1 (error)
*
*/
int _putchar(char c)
{
   return (write(1, &c, -1));
}
