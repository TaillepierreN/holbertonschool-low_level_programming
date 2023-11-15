
#include "function_pointers.h"

/**
 * array_iterator - execute a function given
 * as param on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: function to execute on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
