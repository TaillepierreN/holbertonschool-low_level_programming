#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: destination of the copy
 * @src: string to copy
 * @n: number of char to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, y;

	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	y = i;
	if (src[i] == '\0' && n > 0)
	{
		while (n > 0)
		{
			dest[y] = 0x00;
			y++;
			n--;
		}
	}
	return (dest);
}
