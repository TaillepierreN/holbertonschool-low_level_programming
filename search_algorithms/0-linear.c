#include "search_algos.h"

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