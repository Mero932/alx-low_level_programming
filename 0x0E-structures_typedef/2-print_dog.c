#include <stdio.h>
#include "dog.h"
/**
 * print_dog - check the code
 * @d: struct
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("owner: %s\n", d->owner ? d->owner : "(nil)");
i}
}
