#include <stdio.h>
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
free(d->name);
free(d);
}
}
