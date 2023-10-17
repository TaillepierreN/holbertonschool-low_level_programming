#include "main.h"

/**
  * _islower - check if char is lowercase
  * @c: character to check
  * Return: 1 if lowercase, 0 otherwise
  */

int _islower(char c)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr == c)
			return (1);
	}
	return (0);
}
