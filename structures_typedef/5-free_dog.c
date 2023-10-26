#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - accept a dog struct and free it from memory
 * @dog: the dog to be let out
*/

void free_dog(dog_t *dog)
{
	if (dog)
	{
		if ((*dog).name)
			free((*dog).name);
		if ((*dog).owner)
			free((*dog).owner);
		free(dog);
	}
}
