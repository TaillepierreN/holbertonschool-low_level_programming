#include "main.h"

/**
 * get_bit - return value of a bit at index
 * @n: number to find the bit value of
 * @index: index where to find the bit
 * Return: value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
