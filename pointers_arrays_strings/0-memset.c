#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the byte b
 * @s: area to fill
 * @b: byte to fill with
 * @n: number of byte to fill
 * Return: memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
