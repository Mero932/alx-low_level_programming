#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - dog details
 * @name: char
 * @age: float
 * @owner: char
 * Return: (NULL)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = strdup(name);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->age = age;
newDog->owner = strdup(owner);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
return (newDog);
}
