#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at index
 * @n: number where to set the bit
 * @index: index where to set the bit
 * Return: 1 if success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ~(i << index) & *n;
	return (1);
}
