#include "dog.h"

/**
 * free_dog - free the allocated memory of the dog
 * @d: pointer to the struct to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
