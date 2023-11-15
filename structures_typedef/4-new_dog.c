#include "dog.h"

/**
 * new_dog - add a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: a pointer to the struct new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}

	if (name == NULL || owner == NULL)
	{
		free(name);
		free(owner);
		free(doggo);
		return (NULL);
	}


	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
