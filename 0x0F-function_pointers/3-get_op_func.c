#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
int i = 0;
while (op[i].op != NULL)
{
if (*(op[i].op) == *s && *(s + 1) == '\0')
return (op[i].f);
i++;
}
return (NULL);
}

