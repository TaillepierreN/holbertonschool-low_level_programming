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
	int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		array[i] = c;
	return (array);
}
