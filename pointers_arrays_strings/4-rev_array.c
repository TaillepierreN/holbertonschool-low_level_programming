#include "main.h"
/**
 * reverse_array - reverse the array
 * @a: array to reverse
 * @n: number of element in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n -= 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}

}
