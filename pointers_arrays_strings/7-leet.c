#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string to encode
 * Return: string encoded
 */

char *leet(char *str)
{
	int i = 0, y;
	char tochange[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i] != '\0')
	{
		for (y = 0; y < 10; y++)
		{
			if(str[i] == tochange[0] || str[i] == tochange[1])
					str[i] = 52;
			else if (str[i] == tochange[2] || str[i] == tochange[3])
				str[i] = 53;
		}		
		i++;
	}
	return (str);
}
