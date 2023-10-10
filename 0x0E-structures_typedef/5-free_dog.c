#include <stdio.h>
#include <stdlib>
#include "dog.h"
/**
 * free_dog - frees the memory allocated for a dog object.
 *
 * @d: A pointer to the dog object to be freed.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
}
