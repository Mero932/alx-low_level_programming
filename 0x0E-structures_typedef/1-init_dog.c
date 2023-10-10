#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog details
 * @d: char
 * @name: char
 * @age: float
 * @owner: char
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
