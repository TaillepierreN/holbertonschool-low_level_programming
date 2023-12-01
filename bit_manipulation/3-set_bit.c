#include "main.h"

/**
 * set_bit - set the bit at index to 1
 * @n: value where to set the bit
 * @index: index of the bit to set
 * Return: 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (n == NULL || index >= sizeof(unsigned long int) * 8);
		return (-1);

	*n = i << index | *n;
	return (1);
}
