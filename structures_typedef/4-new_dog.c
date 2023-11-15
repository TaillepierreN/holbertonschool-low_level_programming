#include "dog.h"
#include <string.h>
/**
 * new_dog - add a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: a pointer to the struct new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->name = malloc(strlen(name) + 1);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = malloc(strlen(owner) + 1);

	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	strcpy(doggo->owner, owner);
	return (doggo);
}
