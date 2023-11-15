#include "dog.h"

/**
 * print_dog - print the data on the dog
 * @d: pointer to the struct where data is stored
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name : %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age : %f\n", d->age);
	printf("Owner : %s\n", (d->owner == NULL) ? "(nil)" : d->owner);

}
