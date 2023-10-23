#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0, y = 0;
	char temp;

	while (s[i] != '\0')
		i++;
	i = i - 1;

	while (i > y)
	{
		temp = s[i];
		s[i] = s[y];
		s[y] = temp;
		i--;
		y++;
	}
}
