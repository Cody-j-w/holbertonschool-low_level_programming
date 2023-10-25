#include "dog.h"
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
	dog_t puppy;
	char *pup_name = name;
	char *pup_owner = owner;

	puppy.name = pup_name;
	puppy.age = age;
	puppy.own = pup_owner;

	return (puppy);
}