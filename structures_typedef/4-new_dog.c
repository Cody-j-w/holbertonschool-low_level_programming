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

	

	if (puppy)
	{
		puppy->name = _strdup((name));
		puppy->age = age;
		puppy->owner = _strdup((owner));

		return (puppy);
	}

	free (puppy);
	return (0);
	
}
