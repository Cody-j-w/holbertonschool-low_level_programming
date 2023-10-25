#include "dog.h"
#include "9-strcpy.c"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog struct using the provided parameters
 * @name: the name of the dog to be created
 * @age: the age of the dog to be created
 * @owner: the owner of the dog to be created
 *
 * Return: the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
	{
		free(puppy);
		return (0);
	}
	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;

	return (puppy);
}
