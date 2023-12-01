#include "main.h"

/**
 * get_bit_at_index_rec - go through the number to get to index
 * @n: number
 * @index: index to go to
 * @i: iteration index
 * Return: value of bit at index, -1 if error
*/
int get_bit_at_index_rec(unsigned long int n,
unsigned int index, unsigned int i)
{
	if (i == index)
	{
		return (n & 1);
	}
	else if (n == 0 && i != index)
		return (-1);
	else
	{
		i++;
		return (get_bit_at_index_rec(n >> 1, index, i));
	}
}

/**
 * get_bit - initialise i and call recursive
 * @n: number to find the bit value of
 * @index: index where to find the bit
 * Return: value of bit at index, -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	return (get_bit_at_index_rec(n, index, i));
}
