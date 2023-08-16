#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
int i;	
if (d == NULL || name == NULL || owner == NULL) {
printf("Invalid input parameters.\n");
return;
}
d->name = (char *)malloc(sizeof(char));
d->owner = (char *)malloc(sizeof(char)); 
i = 0;
while (name[i] != '\0') {
        d->name[i] = name[i];
        i++;
    }
d->name[i] = '\0'; 
i = 0;
while (owner[i] != '\0') {
d->owner[i] = owner[i];
i++;
}
d->owner[i] = '\0'; 
d->age = age;
}

