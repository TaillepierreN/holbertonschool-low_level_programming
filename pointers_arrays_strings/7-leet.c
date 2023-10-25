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
	char changeto[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		for (y = 0; y < 10; y++)
		{
			if(str[i] == tochange[y])
				str[i] = changeto[y];
		}		
		i++;
	}
	return (str);
}
