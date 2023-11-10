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
	void *string;
	char *temp, *trial;
	unsigned int i = 0;

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
	temp = ptr;
	string = malloc(new_size * sizeof(*temp));
	if (string == NULL)
	{
		free(ptr);
		return (NULL);
	}
	trial = string;
	while ((old_size < new_size) ? i < old_size : i < new_size)
	{
		trial[i] = temp[i];
		i++;
	}

	free(ptr);
	return (string);
}
