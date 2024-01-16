#include "search_algos.h"

/**
 * binary_search - search for a value in an array of int using linear search
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to look for
 * Return: index where the value is found or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int low = 0, medium, high = size - 1, index;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("searching in array: ");
		for (index = low; index <= high; index++)
		{
			printf("%d", array[index]);
			if (index < high)
				printf(", ");
		}
		printf("\n");

		medium = low + (high - low) / 2;
		if (array[medium] == value)
			return (medium);
		if (array[medium] < value)
			low = medium + 1;
		else
			high = medium - 1;
	}

	return (-1);
}
