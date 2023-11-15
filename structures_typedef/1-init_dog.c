#include "dog.h"

/**
 * init_dog - initialize a variable of type stuct dog
 * @d: struct dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;


}
