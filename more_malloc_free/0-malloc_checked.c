#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of byte to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *allocmem;

	allocmem = malloc(sizeof(char) * b);

	if (allocmem == NULL)
		exit(98);
	return (allocmem);
}
