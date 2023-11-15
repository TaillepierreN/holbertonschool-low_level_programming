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


	doggo->name = _strdup(name);
	doggo->age = age;
	doggo->owner = _strdup(owner);

	return (doggo);
}
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contain a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *string;
	int strlength, i;

	if (str == NULL)
		return (NULL);

	strlength = strlen(str);
	string = malloc((strlength + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

/*	for (i = 0; i < strlength; i++)*/
	i = 0;
	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}
	return (string);
}
