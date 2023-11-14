#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

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
