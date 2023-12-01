#include "main.h"

int get_bit_at_index_rec(unsigned long int n, unsigned int index, unsigned int i)
{
    if (i == index)
    {
        _putchar('0' + (n & 1));
        return (n & 1);
    }
    else
    {
        i--;
        return (get_bit_at_index_rec(n, index, i));
    }
}

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int i = 1, divisor = 1;

    while (index / divisor > 9)
    {
        divisor *= 10;
        i++;
    }
    return (get_bit_at_index_rec(n, index, i));
}
