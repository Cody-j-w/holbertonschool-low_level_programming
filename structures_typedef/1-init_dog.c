#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a new dog struct
 * @d: the struct being used
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
