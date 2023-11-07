#include "main.h"

/**
 * array_range - create an array of int containing value from min to max
 * @min: first value of array
 * @max last value of array
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int diff, i, j;
	int *array;

	if (min > max)
		return (NULL);
	diff = 0;
	for (i = min; i < max; i++)
		diff += 1;

	array = malloc(sizeof(int) * diff);
	if (array == NULL)
		return (NULL);

	for (j = 0; min <  max; j++)
	{
		array[j] = min;
		min++;
	}
	return (array);
}
