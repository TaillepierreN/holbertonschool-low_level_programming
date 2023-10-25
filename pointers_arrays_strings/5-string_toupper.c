#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @a: adress of the string to change
 * Return: string modified
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
