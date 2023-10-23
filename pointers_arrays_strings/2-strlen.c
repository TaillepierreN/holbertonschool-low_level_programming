#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to find the length of
 * Return: int length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		++length;
	return (length);
}
