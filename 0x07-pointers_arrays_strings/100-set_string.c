#include "main.h"
/**
 *set_string - Set the value of a pointer to a char.
 *@s: (char)
 *@to: (char)
 */
void set_string(char **s, char *to)
{
if (s != NULL && to != NULL)
{
*s = to;
}
}
