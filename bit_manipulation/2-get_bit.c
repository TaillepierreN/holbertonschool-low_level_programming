#include "main.h"

int get_bit_at_index_rec(unsigned long int n, unsigned int index, unsigned int i)
{
	if (i == index)
	{
		return (n & 1);
	}
	else
	{
		i++;
		return (get_bit_at_index_rec(n>>1, index, i));
	}
}

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	return (get_bit_at_index_rec(n, index, i));
}
