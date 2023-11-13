#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = malloc(sizeof(dog_t));

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	if (doggo == NULL)
		return (NULL);
	return (doggo);
}
