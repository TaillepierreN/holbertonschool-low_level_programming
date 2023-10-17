#include "main.h"

/**
 * _isalpha - check if int is alphabetic
 * @c: int to check
 *
 * Return: 1 if alphabetic,0 otherwise
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			return (1);
	}
	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
