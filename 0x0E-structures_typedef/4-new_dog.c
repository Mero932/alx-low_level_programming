#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - dog details
 * @name: char
 * @age: float
 * @owner: char
 * Return: (NULL)
 */
dog_t* new_dog(char* name, float age, char* owner) 
{
dog_t* dog = (dog_t*) malloc(sizeof(dog_t));
if (dog == NULL) 
{  
printf("Memory allocation failed.\n");
return NULL;
}
dog->name = (char*) malloc(strlen(name) + 1);
dog->owner = (char*) malloc(strlen(owner) + 1);
if (dog->name == NULL || dog->owner == NULL) 
{  
printf("Memory allocation failed.\n");
free(dog);  
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog); 
}
