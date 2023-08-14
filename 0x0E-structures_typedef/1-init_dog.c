/**
 * init_dog - check the code
 *
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
int i = 0;
while (name[i] != '\0' && i < 19)
{
d->name[i] = name[i];
i++;
}
d->name[i] = '\0';
d->age = age;
}

