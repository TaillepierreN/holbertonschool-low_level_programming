#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff += (s1[i] - s2[i]);
			return (diff);
		}
		i++;
	}
	return (diff);
}
