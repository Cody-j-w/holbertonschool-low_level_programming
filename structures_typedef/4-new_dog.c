#include "dog.h"
#include "1-strdup.c"
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
	dog_t *puppy = malloc(sizeof(dog_t));
	char *pup_name = _strdup((name));
	char *pup_owner = _strdup((owner));

	if (puppy && pup_name && pup_owner)
	{
		puppy->name = pup_name;
		puppy->age = age;
		puppy->owner = pup_owner;

		return (puppy);
	}

	free(puppy);
	free(pup_name);
	free(pup_owner);
	return (0);
}
