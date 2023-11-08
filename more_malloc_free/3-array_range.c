#include "main.h"

/**
 * array_range - create an array of int containing value from min to max
 * @min: first value of array
 * @max last value of array
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int diff, i;
	int *array;

	if (min > max)
		return (NULL);
	diff = max - min;
	array = malloc(sizeof(int) * (diff + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <  max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
