#include "main.h"

/**
 * create_array - create an array of chars
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: specific char to initializes with
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if(array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
