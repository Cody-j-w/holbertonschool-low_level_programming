#ifndef HEADER
#define HEADER
/**
 * struct dog - a simple struct containing the details for a dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *);
#endif
