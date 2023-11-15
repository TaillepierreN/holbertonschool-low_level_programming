#include "function_pointers.h"

/**
 * int_index - search for an int
 * @array: array that host the ints to check
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp func
 * does not return 0, if no element matches pr if size <= 0
 * return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			return (-1);

		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);

}
