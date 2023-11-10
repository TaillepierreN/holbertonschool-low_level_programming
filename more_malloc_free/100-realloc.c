#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size of the allocated space for ptr
 * @new_size: is the newsize of the new memory block
 * Return: pointer to newly reallocated block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *string, *temp;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);
	if (ptr == NULL)
	{
		string = malloc(new_size);
		if (string == NULL)
			return (NULL);
		return (string);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	string = malloc(new_size);
	if (string == NULL)
		return (NULL);
	temp = ptr;
	for (i = 0; i < old_size; i++)
	{
		string[i] = temp[i];
	}
	free(ptr);
	return (string);
}
