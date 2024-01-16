#include "search_algos.h"

/**
 * linear_search - search a value in array of int using linear search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to look for in the array
 * Return: index where the value is,if found otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	if (array)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}
